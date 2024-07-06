```
#include <algorithm>
using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    for (int num : lst) {
        if (count(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())) > 1) {
            for (int i = 0; i < count(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())); i++) {
                result.push_back(*min_element(lst.begin(), lst.end()));
                lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
            }
        } else if (count(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())) > 1) {
            for (int i = 0; i < count(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())); i++) {
                result.push_back(*max_element(lst.begin(), lst.end()));
                lst.erase(remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());
            }
        } else if (count(lst.begin(), lst.end(), num) > 1) {
            for (int i = 0; i < count(lst.begin(), lst.end(), num); i++) {
                result.push_back(num);
                lst.erase(remove(lst.begin(), lst.end(), num), lst.end());
            }
        } else {
            result.push_back(num);
            lst.erase(remove(lst.begin(), lst.end(), num), lst.end());
        }
    }

    return result;
}