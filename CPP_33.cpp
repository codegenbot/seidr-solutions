#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>
using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> sort_third(const vector<int>& l) {
    vector<int> l_prime = l;
    for (int i = 0; i < l.size(); i += 3) {
        sort(l_prime.begin() + i, l_prime.begin() + i + 3);
    }
    return l_prime;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    cout << "Test passed successfully." << endl;
    return 0;
}