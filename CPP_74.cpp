#include <string>

bool issame(vector<string> a, vector<string> b) {
    int total_chars1 = 0;
    for (string str : a) {
        total_chars1 += str.length();
    }

    int total_chars2 = 0;
    for (string str : b) {
        total_chars2 += str.length();
    }

    if (total_chars1 < total_chars2) {
        return true;
    } else {
        return false;
    }
}