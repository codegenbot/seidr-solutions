```
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool aresame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> input) {
    sort(input.begin(), input.end());
    for (int i = 0; i < input.size(); i++) {
        if (input[i].size() > 1) {
            char firstChar = input[i][0];
            for (int j = i + 1; j < input.size(); j++) {
                if (input[j][0] == firstChar) {
                    input.erase(input.begin() + j);
                    j--;
                }
            }
        }
    }
    return input;
}

bool aresame(vector<string> a, vector<string> b, vector<string> c) {
    if (a.size() != b.size() || a.size() != c.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!aresame({a[i]}, {b[i]}, {c[i]})) {
            return false;
        }
    }
    return true;
}