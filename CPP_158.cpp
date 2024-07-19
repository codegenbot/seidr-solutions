int maxUnique = -1;
    string result = "";
    
    for (const auto& word : words) {
        vector<bool> appears(256, false);
        int uniqueCount = 0;
        
        for (char c : word) {
            if (!appears[c]) {
                appears[c] = true;
                uniqueCount++;
            }
        }
        
        if (uniqueCount > maxUnique || (uniqueCount == maxUnique && word < result)) {
            maxUnique = uniqueCount;
            result = word;
        }
    }
    
    return result;
}