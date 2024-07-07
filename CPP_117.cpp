#include <cctype>

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            bool has_n_consonants = false;
            int consonant_count = 0;
            
            for (char ch : word) {
                if (!ispunct(ch) && !isspace(ch) && !isalpha(ch)) continue;
                
                if (!ispunct(ch) && !isspace(ch) && isalpha(ch)) {
                    if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                        consonant_count++;
                    }
                }
                
                if (consonant_count == n) has_n_consonants = true;
            }
            
            if (has_n_consonants) result.push_back(word);
            word = "";
        }
    }
    
    return result;
}