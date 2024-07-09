#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<vector<int>> get_collatz_vectors(int n) {
    vector<vector<int>> result;
    for (int i = 1; i <= n; i++) {
        vector<int> collatz_sequence;
        int num = i;
        while (num != 1) {
            if (num % 2 == 0) {
                num = num / 2;
            } else {
                num = 3 * num + 1;
            }
            collatz_sequence.push_back(num);
        }
        result.push_back(collatz_sequence);
    }
    return result;
}