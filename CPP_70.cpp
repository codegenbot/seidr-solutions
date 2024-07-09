```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        result.push_back(minVal);
        lst.erase(remove(lst.begin(), lst.end(), minVal), lst.end());
        
        if (!lst.empty()) {
            int maxVal = *max_element(lst.begin(), lst.end());
            result.push_back(maxVal);
            lst.erase(remove(lst.begin(), lst.end(), maxVal), lst.end());
        }
    }
    return result;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    // Rest of your code
}