string anti_shuffle(string s){
        int start = 0;
        vector<string> words;
        for (int i = 0; i <= s.size(); ++i) {
            if (i == s.size() || s[i] == ' ') {
                string word = s.substr(start, i - start);
                sort(word.begin(), word.end());
                words.push_back(word);
                start = i + 1;
            }
        }
        string result;
        for (int i = 0; i < words.size(); ++i) {
            result += words[i] + (i == words.size() - 1 ? "" : " ");
        }
        return result;
    }