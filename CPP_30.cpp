#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

vector<float> get_positive(vector<float> l) {
    vector<float> positive_nums;
    for (int i = 0; i < l.size(); i++) {
        if (l[i] > 0) {
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-4) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(get_positive({}), get_positive({})));
    return 0;
}