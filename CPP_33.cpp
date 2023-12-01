#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);
vector<int> sort_third(vector<int> l);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_third(vector<int> l) {
    vector<int> l_prime = l;
    vector<int> l_third;

    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l_third.push_back(l[i]);
        }
    }

    sort(l_third.begin(), l_third.end());

    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l_prime[i] = l_third[i / 3];
        }
    }

    return l_prime;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));

    cout << "Test cases pass" << endl;
    return 0;
}