#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return equal(a.begin(), a.end(), b.begin(), b.end());
}