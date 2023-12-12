#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int by_length(const string& s1, const string& s2) {
    if (s1.size() < s2.size()) {
        return -1;
    } else if (s1.size() > s2.size()) {
        return 1;
    } else {
        return 0;
    }
}