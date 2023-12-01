map<char, int> histogram(string test) {
    map<char, int> countMap;
    string word;
    for (int i = 0; i < test.size(); i++) {
        if (test[i] != ' ') {
            word += test[i];
        } else if (word != "") {
            countMap[word[0]]++;
            word = "";
        }
    }
    if (word != "") {
        countMap[word[0]]++;
    }
    return countMap;
}