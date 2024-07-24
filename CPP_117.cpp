Here is the completed code:

```cpp
vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonants = 0;

    for (char c : s) {
        if (c == ' ') {
            if (!word.empty() && consonants == n) {
                result.push_back(word);
                word = "";
                consonants = 0;
            }
            continue;
        }

        bool isConsonant = !isalpha(c) || !ispunct(c) || (tolower(c) >= 'b' && tolower(c) <= 'z');
        if (isConsonant) {
            consonants++;
        } else {
            if (consonants == n) {
                result.push_back(word);
                word = "";
                consonants = 0;
            }
            word += c;
        }
    }

    if (!word.empty() && consonants == n) {
        result.push_back(word);
    }

    return result;
}