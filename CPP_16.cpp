#include <string>
using namespace std;

int count_distinct_characters(string str) {
    string str_lower = str;
    transform(str_lower.begin(), str_lower.end(), str_lower.begin(), ::tolower);
    vector<char> unique_chars;
    for (char c : str_lower) {
        if (find(unique_chars.begin(), unique_chars.end(), c) == unique_chars.end()) {
            unique_chars.push_back(c);
        }
    }
    return unique_chars.size();
}