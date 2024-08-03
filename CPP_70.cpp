#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    result.push_back(*min_element(lst.begin(), lst.end()));
    lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());

    sort(lst.begin(), lst.end());
    result.push_back(*max_element(lst.begin(), lst.end()));
    lst.erase(remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());

    while (!lst.empty()) {
        if (result.back() == *min_element(lst.begin(), lst.end())) {
            result.push_back(*min_element(lst.begin(), lst.end()));
            lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
        } else {
            result.push_back(*max_element(lst.begin(), lst.end()));
            lst.erase(remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());
        }
    }

    return result;
}