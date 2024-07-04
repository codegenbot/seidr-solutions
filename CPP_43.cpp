#include <unordered_set>
#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    unordered_set<int> seen;
    for (int num : l) {
        if (seen.find(-num) != seen.end()) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main() {
    assert(pairs_sum_to_zero({-3, 9, -1, 4, 2, 31}) == false);
    assert(pairs_sum_to_zero({-3, 9, -1, 1, 2, 31}) == true);
    cout << "All tests passed!" << endl;
    return 0;
}