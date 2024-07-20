string anti_shuffle(string s) {
    string result = "";
    size_t pos = 0;
    while ((pos = s.find(' ')) != string::npos) {
        string word = s.substr(0, pos);
        for (char &c : word) {
            char temp = c;
            for (int i = 0; i < word.length(); i++) {
                if (temp > word[i]) {
                    swap(temp, word[i]);
                }
            }
            result += temp;
        }
        s.erase(0, pos + 1);
    }
    result += s;
    return result;
}