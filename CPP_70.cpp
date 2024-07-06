```cpp
#include <vector>
#include <algorithm>
using namespace std;

int removeOne(const vector<int>::iterator& it) {
    while (it != lst.end() && *it == *std::prev(it)) {
        ++it;
    }
    return it - lst.begin();
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(it);
        if (lst.size() > 0) {
            result.push_back(max_val);
            lst.erase(std::remove_one(lst.begin()), lst.end());
        }
    }
    return result;
}