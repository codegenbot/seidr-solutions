Here is the completed code:

```cpp
string anti_shuffle(string s) {
    string result = "";
    size_t pos = 0;

    while (pos < s.length()) {
        if (s[pos] == ' ') {
            result += " ";
            pos++;
        } else {
            string word = "";
            do {
                word += s[pos];
                pos++;
            } while (pos < s.length() && s[pos] != ' ');
            string newWord = "";
            for (char c : word) {
                newWord += std::min_element(word.begin(), word.end(),
                                            [](char a, char b) { return a < b; }) -> c;
            }
            result += newWord;
        }
    }
    return result;
}