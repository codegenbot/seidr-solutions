#include <string>

bool issame(const vector<string>& lst1, const vector<string>& lst2) {
    int total_chars1 = 0;
    for (const string& str : lst1) {
        total_chars1 += str.length();
    }

    int total_chars2 = 0;
    for (const string& str : lst2) {
        total_chars2 += str.length();
    }

    return total_chars1 == total_chars2;
}