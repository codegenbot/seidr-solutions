#include<stdio.h>
#include<vector>
using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i : s) {
        int complement = -i;
        if (s.find(complement) != s.end() && i != complement) {
            return true;
        }
    }
    return false;
}