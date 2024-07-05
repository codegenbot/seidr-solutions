#include <sstream>
#include <cctype>

vector<string> select_words(string s, int n) {
    vector<string> result;
    istringstream iss(s);
    string word;
    while (iss >> word) {
        int consonant_count = 0;
        for (char c : word) {
            char lower_c = tolower(c);
            if (isalpha(lower_c) && lower_c != 'a' && lower_c != 'e' && lower_c != 'i' && lower_c != 'o' && lower_c != 'u') {
                consonant_count++;
            }
        }
        if (consonant_count == n) {
            result.push_back(word);
        }
    }
    return result;
}