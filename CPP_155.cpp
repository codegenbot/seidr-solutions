#include <vector>
#include <string>

bool issame(vector<int> v1, vector<int> v2) {
    return v1[0] == v2[0] && v1[1] == v2[1];
}

vector<int> even_odd_count(int num) {
    vector<int> result(2, 0);
    string num_str = to_string(abs(num));
    for (char c : num_str) {
        if (c % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}