#include<stdio.h>
#include<vector>
using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    unordered_set<int> s;
    for (int x : l) {
        if (s.find(-x) != s.end()) return true;
        s.insert(x);
    }
    return false;
}