```cpp
#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(*lst.begin());
        lst.erase(lst.begin());
        if (!lst.empty())
            sort(lst.begin(), lst.end());
    }

    return result;
}

int main() {
    assert(equal(strange_sort_vector({1, 2, 3}).begin(), strange_sort_vector({1, 2, 3}).end(), {1, 2, 3}.begin(), {1, 2, 3}.end()));
    return 0;
}