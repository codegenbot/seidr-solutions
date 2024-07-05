#include<sstream>

bool is_consonant(char c) {
    c = tolower(c);
    return (c >= 'a' && c <= 'z') && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int consonant_count(const string& word) {
    return count_if(word.begin(), word.end(), is_consonant);
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    istringstream stream(s);
    string word;
    while (stream >> word) {
        if (consonant_count(word) == n) {
            result.push_back(word);
        }
    }
    return result;
}