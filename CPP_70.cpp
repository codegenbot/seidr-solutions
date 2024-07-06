```cpp
#include <vector>
#include <algorithm>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());
        result.push_back(minVal);
        result.push_back(maxVal);
        lst.erase(remove(lst.begin(), lst.end(), minVal), lst.end());
        lst.erase(remove(lst.begin(), lst.end(), maxVal), lst.end());
    }

    return result;
}

int main() {
    assert(issame(strange_sort_vector({111111}), vector<int>{111111}));
    return 0;
}