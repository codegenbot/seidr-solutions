#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return (a[0] == b[0] && a[1] == b[1]);
}

vector<int> even_odd_count(int num) {
    vector<int> result(2, 0);
    string num_str = to_string(abs(num));
    for (char c : num_str) {
        if ((c - '0') % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}