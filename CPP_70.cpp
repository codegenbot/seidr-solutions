```cpp
#include <algorithm>
using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> min_max;
    for (int num : lst) {
        if (num == *min_element(lst.begin(), lst.end())) {
            result.push_back(num);
            lst.erase(remove(lst.begin(), lst.end(), num), lst.end());
        } else if (num == *max_element(lst.begin(), lst.end())) {
            result.push_back(num);
            lst.erase(remove(lst.begin(), lst.end(), num), lst.end());
        }
    }

    return result;
}

assert(strange_sort_vector({111111}) == vector<int> {111111});