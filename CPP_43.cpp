#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool pairs_sum_to_zero(const vector<int>& l) {
    unordered_set<int> seen;
    for (int num : l) {
        if (seen.count(-num)) return true;
        seen.insert(num);
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; ++i) cin >> l[i];
    cout << (pairs_sum_to_zero(l) ? "True" : "False") << endl;
    return 0;
}