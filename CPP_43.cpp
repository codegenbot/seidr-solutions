#include <iostream>
#include <vector>
#include <unordered_set>
#include <cassert>

using namespace std;

bool pairs_sum_to_zero(const vector<int>& l) {
    unordered_set<int> seen;
    for (int num : l) {
        if (seen.count(-num) || seen.count(num)) return true;
        seen.insert(num);
        seen.insert(-num);
    }
    return false;
}

int solveProblem() {
    assert(pairs_sum_to_zero({-3, 9, -1, 4, 2, 31}) == false);
    
    return 0;
}