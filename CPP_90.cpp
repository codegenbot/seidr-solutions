#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int next_smallest(vector<int> lst) {
    vector<int> v = lst;
    sort(v.begin(), v.end());
    for (int i = v.size() - 2; i >= 0; i--) {
        if (v[i] > v[0]) return v[i];
    }
    return v[0]; 
}

assert(next_smallest({-35, 34, 12, -45}) == -35);