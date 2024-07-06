bool is_same(char a, char b) {
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
        return tolower(a) == tolower(b);
    } else {
        return a == b;
    }
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";

    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) { 
            bool has_n_consonants = false;
            int consonant_count = 0;
            for (int i = 0; i < word.size(); ++i) {
                char ch = word[i];
                if (!ispunct(ch) && !isspace(ch)) {
                    while (i < word.size() && !isvowel(tolower(word[i]))) {
                        consonant_count++;
                        i++;
                    }
                    if (consonant_count == n) {
                        has_n_consonants = true;
                        break;
                    }
                }
            }
            if (has_n_consonants) {
                result.push_back(word);
            }
            word = ""; 
        }
    }
    return result;
}