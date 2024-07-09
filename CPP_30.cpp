#include <iostream>
#include <vector>
#include <memory>
using namespace std;

bool issame(const vector<float>& a, const vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<float> getPositive(const vector<float>& l) {
    vector<float> result(allocator<float>());
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(getPositive({}), {}) == true);
    return 0;
}