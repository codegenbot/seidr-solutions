#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return equal(a.begin(), a.end(), b.begin(), b.end());
}

vector<int> incr_list(vector<int> input) {
    for (int& num : input) {
        num++;
    }
    return input;
}