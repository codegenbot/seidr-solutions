#include <iostream>
#include <vector>
#include <unordered_set>
#include <cassert>

using namespace std;

bool pairs_sum_to_zero(const vector<int>& l) {
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
    vector<int> input;
    int n;
    while (cin >> n) {
        input.push_back(n);
    }
    cout << (pairs_sum_to_zero(input) ? "true" : "false") << endl;
    
    return 0;
}