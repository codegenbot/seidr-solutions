```cpp
#include <algorithm>
#include <vector>
#include <iostream>

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        auto it = remove(lst.begin(), lst.end(), min_val);
        lst.erase(it, lst.end());
        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            it = remove(lst.begin(), lst.end(), max_val);
            lst.erase(it, lst.end());
        }
    }
    return result;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    vector<int> input = {num};
    vector<int> output = strange_sort_list(input);
    cout << "Output: ";
    for (auto i : output) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}