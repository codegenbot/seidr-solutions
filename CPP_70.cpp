#include <algorithm>
using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    for (int num : lst) {
        if (count(result.begin(), result.end(), num) == 0) {
            if (count(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())) > count(lst.begin(), lst.end(), num)) {
                result.push_back(num);
            } else if (count(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())) > count(lst.end() - 1, lst.rbegin(), num)) {
                result.push_back(num);
            }
        }
    }

    return result;
}