```cpp
#include <vector>
#include <algorithm>
using namespace std;

int remove_one(const vector<int>& vec) {
    auto it = vec.begin();
    while (it != vec.end() && *it == *vec.begin()) {
        ++it;
    }
    return it - vec.begin();
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        result.push_back(min_val);
        auto it = remove_one(lst);
        if (it != lst.end()) {
            result.push_back(*it);
            lst.erase(it, lst.end());
        }
    }
    return result;
}