#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return equal(a.begin(), a.end(), b.begin(), b.end());
}

vector<int> sum_product(const vector<int>& vec) {
    vector<int> result;
    for (int num : vec) {
        result.push_back(num);
        result.push_back(num);
    }
    return result;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    return 0;
}