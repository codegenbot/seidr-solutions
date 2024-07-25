#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

bool will_it_fly(const vector<int>& q, int w) {
    int sum = accumulate(q.begin(), q.end(), 0);
    if (sum <= w && equal(q.begin(), q.end(), q.rbegin())) {
        return true;
    }
    return false;
}

int main() {
    vector<int> q = {5, 5, 5};
    int w = 15;
    cout << will_it_fly(q, w) << endl;
    return 0;
}