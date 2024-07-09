#include <algorithm>
#include <vector>
using namespace std;

int findMax(vector<int> l) {
    auto max_val = *max_element(l.begin(), l.end());
    return max_val;
}