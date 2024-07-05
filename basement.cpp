#include <vector>
#include <iostream>
using namespace std;

void basement(vector<int>& v) {
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < 0) {
            return i + 1; // since we want the first index, not the value
        }
    }
    return -1; // no negative element found
}