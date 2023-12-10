#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

vector<int> leaders(const vector<int>& v) {
    vector<int> result;
    int max_so_far = 0;
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] >= max_so_far) {
            result.push_back(v[i]);
            max_so_far = v[i];
        }
    }
    return result;
}