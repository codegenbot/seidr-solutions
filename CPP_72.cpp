#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (sum <= w && equal(q.begin(), q.end(), q.rbegin())) {
        return true;
    }
    return false;
}

int solve_problem() {
    int n, w;
    cin >> n >> w;
    vector<int> q(n);
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }

    if (will_it_fly(q, w)) {
        cout << "It will fly!" << endl;
    } else {
        cout << "It will not fly!" << endl;
    }

    return 0;
}