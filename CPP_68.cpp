#include <vector>
#include <cassert>
using namespace std;

vector<int> pluck(const vector<int>& arr, int index) {
    if (index >= 0 && index < arr.size()) {
        auto it = arr.begin() + index;
        arr.erase(it, it + 1);
    }
    return arr;
}

bool issame(const vector<int>& v1, const vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

int main() {
    vector<int> arr{7, 9, 7, 1};
    assert(issame(pluck({7, 9, 7, 1}, 0), {}));
    return 0;
}