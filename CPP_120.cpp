#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
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

vector<int> maximum(const vector<int>& arr, int k) {
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end(), greater<int>());
    return vector<int>(sorted_arr.begin(), sorted_arr.begin() + k);
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return 0;
}