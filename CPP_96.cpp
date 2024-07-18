#include<vector>

vector<int> count_up_to(int n) {
    vector<int> result;
    if (n < 2) {
        return result;
    }
    vector<bool> is_prime(n, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < n; ++i) {
        if (is_prime[i]) {
            result.push_back(i);
            for (int j = i * 2; j < n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return result;
}

bool issame(const vector<int>& v1, const vector<int>& v2) {
    return v1 == v2;
}