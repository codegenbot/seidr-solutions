```cpp
#include <algorithm>
#include <vector>

bool isEqual(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    for (int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

int main() {
    vector<int> test = {1, 2, 3, -23, 243, -400, 0};
    vector<int> res = maximum(test, 3);
    for (int i:res) cout << i<< " ";
    cout << endl;
}