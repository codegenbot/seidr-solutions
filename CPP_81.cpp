#include <iostream>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}