#include <sstream>
#include <cctype>

vector<string> select_words(string s, int n) {
    vector<string> result;
    istringstream iss(s);
    string word;
    string vowels = "aeiouAEIOU";
    
    while (iss >> word) {
        int consonant_count = 0;
        for (char c : word) {
            if (isalpha(c) && vowels.find(c) == string::npos) {
                consonant_count++;
            }
        }
        if (consonant_count == n) {
            result.push_back(word);
        }
    }
    
    return result;
}