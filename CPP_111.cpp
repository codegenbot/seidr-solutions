map<char,int> histogram(string test){
    map<char, int> countMap;
    string letter;

    // iterate through each character in the string
    for (char c : test) {
        // check if the character is a letter
        if (isalpha(c)) {
            // convert the letter to lowercase
            char lowercase = tolower(c);
            // check if the letter is already in the map
            if (countMap.find(lowercase) != countMap.end()) {
                // increment the count of the letter
                countMap[lowercase]++;
            } else {
                // add the letter to the map with count 1
                countMap[lowercase] = 1;
            }
        }
    }

    // find the maximum count
    int maxCount = 0;
    for (auto it : countMap) {
        if (it.second > maxCount) {
            maxCount = it.second;
        }
    }

    // create a map to store the letters with maximum count
    map<char, int> result;
    for (auto it : countMap) {
        if (it.second == maxCount) {
            result[it.first] = it.second;
        }
    }

    return result;
}