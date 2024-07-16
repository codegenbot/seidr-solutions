#include <string>

bool issame(vector<string> a, vector<string> b) {
    int total_chars1 = 0, total_chars2 = 0;
    for (const string& str : a) {
        total_chars1 += str.size();
    }
    for (const string& str : b) {
        total_chars2 += str.size();
    }
    if (total_chars1 < total_chars2) {
        return a;
    } else {
        return b;
    }
}