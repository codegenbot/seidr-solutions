#include <vector>
#include <string>
#include <cassert>

vector<int> even_odd_count(int num) {
    vector<int> result(2, 0);
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}

bool issame(vector<int> v1, vector<int> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    
    return true;
}