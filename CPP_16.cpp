vector<char> uniqueChars;

    for (char c : str) {
        char lowerC = tolower(c);
        if (find(uniqueChars.begin(), uniqueChars.end(), lowerC) == uniqueChars.end()) {
            uniqueChars.push_back(lowerC);
        }
    }

    return uniqueChars.size();
}