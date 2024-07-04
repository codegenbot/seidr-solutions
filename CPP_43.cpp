#include <unordered_set>
#include <vector>
#include <iostream>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    unordered_set<int> seen;
    for (int num : l) {
        if (seen.count(-num)) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main() {
    vector<int> l;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        l.push_back(num);
    }
    cout << (pairs_sum_to_zero(l) ? "true" : "false") << endl;
    return 0;
}