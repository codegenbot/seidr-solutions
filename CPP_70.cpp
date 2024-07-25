#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        auto min_iter = min_element(lst.begin(), lst.end());
        auto max_iter = max_element(lst.begin(), lst.end());
        result.push_back(*min_iter);
        lst.erase(min_iter);
        if (!lst.empty())
            result.push_back(*max_iter);
        lst.erase(max_iter);
    }
    return result;
}