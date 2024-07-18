#include <vector>
#include <algorithm>
#include <cassert>

vector<int> sort_third(vector<int> l) {
    vector<int> l_divisible_by_three;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l_divisible_by_three.push_back(l[i]);
        }
    }
    sort(l_divisible_by_three.begin(), l_divisible_by_three.end());

    vector<int> l_prime = l;
    int j = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l_prime[i] = l_divisible_by_three[j];
            ++j;
        }
    }

    return l_prime;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}