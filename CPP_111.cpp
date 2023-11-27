map<char, int> histogram(string test) {
    map<char, int> result;
    int maxCount = 0;

    // Count the occurrence of each character in the string
    for (int i = 0; i < test.length(); i++) {
        char c = test[i];
        result[c]++;
        
        // Update maxCount if necessary
        if (result[c] > maxCount) {
            maxCount = result[c];
        }
    }

    // Create a new map with characters having maxCount occurrences
    map<char, int> finalResult;
    for (auto it = result.begin(); it != result.end(); it++) {
        if (it->second == maxCount) {
            finalResult[it->first] = maxCount;
        }
    }

    return finalResult;
}