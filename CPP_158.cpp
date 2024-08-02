string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int countA = 0;
            int countB = 0;
            for (char c : a) {
                if (!isalpha(c)) continue;
                if (countA & (1 << tolower(c) - 'a')) {
                    break;
                }
                countA |= 1 << tolower(c) - 'a';
            }
            for (char c : b) {
                if (!isalpha(c)) continue;
                if (countB & (1 << tolower(c) - 'a')) {
                    break;
                }
                countB |= 1 << tolower(c) - 'a';
            }
            return countA < countB;
        });
    return result;
}