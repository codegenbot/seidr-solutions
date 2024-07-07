vector<string> maxWord;
int maxCount = 0;
for (const auto& word : words) {
    int count = 0;
    set<char> uniqueChars(word.begin(), word.end());
    if (uniqueChars.size() > maxCount) {
        maxCount = uniqueChars.size();
        maxWord.clear();
        maxWord.push_back(word);
    } else if (uniqueChars.size() == maxCount) {
        maxWord.push_back(word);
    }
}
return *max_element(maxWord.begin(), maxWord.end());