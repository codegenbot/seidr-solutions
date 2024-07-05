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