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
    vector<int> l = {-3, 9, -1, 4, 2, 31};
    cout << (pairs_sum_to_zero(l) ? "true" : "false") << endl;
    return 0;
}