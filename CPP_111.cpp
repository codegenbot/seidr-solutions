map<char,int> histogram(string test){
    map<char, int> mp;

    // Split the string into individual words
    stringstream ss(test);
    string word;
    while (ss >> word) {
        // Count the occurrence of each letter in the word
        for (char c : word) {
            mp[c]++;
        }
    }

    // Find the maximum occurrence
    int maxCount = 0;
    for (auto it : mp) {
        if (it.second > maxCount) {
            maxCount = it.second;
        }
    }

    // Construct the result map with letters having maximum occurrence
    map<char, int> res;
    for (auto it : mp) {
        if (it.second == maxCount) {
            res[it.first] = it.second;
        }
    }

    return res;
}