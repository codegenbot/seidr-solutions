#include<sstream>

vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) return result;

    stringstream ss(s);
    string word;

    while (ss >> word) {
        int consonant_count = 0;
        for (char c : word) {
            char lower_c = tolower(c);
            if (lower_c >= 'a' && lower_c <= 'z' && lower_c != 'a' && lower_c != 'e' && lower_c != 'i' && lower_c != 'o' && lower_c != 'u') {
                consonant_count++;
            }
        }
        if (consonant_count == n) {
            result.push_back(word);
        }
    }

    return result;
}