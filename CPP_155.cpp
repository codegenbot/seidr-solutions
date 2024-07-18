#include <vector>

bool issame(vector<int> a, vector<int> b) {
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

assert(issame(even_odd_count(0), vector<int>{1, 0}));