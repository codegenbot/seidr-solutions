```cpp
#include <vector>
#include <algorithm>
using namespace std;

int removeOne(const vector<int>::iterator& it) {
    while (it != lst.end() && *it == *(it+1)) {
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
        lst.erase(removeOne(lst.begin()), lst.end());
        if (lst.size() > 0) {
            result.push_back(max_val);
            lst.erase(removeOne(lst.begin()), lst.end());
        }
    }
    return result;
}