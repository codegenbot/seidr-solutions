#include <vector>
#include <algorithm>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return equal(a.begin(), a.end(), b.begin(), b.end());
}

vector<int> incr_list(vector<int> l) {
    for (int& num : l) {
        num++;
    }
    return l;
}