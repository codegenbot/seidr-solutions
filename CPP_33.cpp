#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

using namespace std;

vector<int> sort_third(const vector<int>& l) {
    vector<int> l_prime = l;
    vector<int> indices;

    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            indices.push_back(i);
        }
    }

    sort(indices.begin(), indices.end());

    for (int i = 0; i < indices.size(); i++) {
        l_prime[indices[i]] = l[indices[i]];
    }

    return l_prime;
}

vector<int> func() {
    vector<int> result = sort_third({5, 6, 3, 4, 8, 9, 2, 1});
    assert(result == vector<int>({2, 6, 3, 4, 8, 9, 5, 1}));

    cout << "Test Passed!" << endl;

    return result;
}