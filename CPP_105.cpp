#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (b.empty()) {
        return a.empty();
    } else {
        return a == b;
    }
}

vector<vector<string>> by_length(const vector<int>& arr) {
    // ...
}