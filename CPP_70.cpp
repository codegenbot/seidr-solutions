#include <algorithm>
using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int num = *min_element(lst.begin(), lst.end());
        result.push_back(num);
        lst.erase(remove(lst.begin(), lst.end(), num), lst.end());
    }

    return result;
}