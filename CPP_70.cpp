#include <algorithm>
#include <vector>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());  // Sort the entire list

    while (!lst.empty()) {
        result.push_back(*lst.rbegin());  // Add the max value
        lst.pop_back();                    // Remove it from the list

        if (!lst.empty())
            result.push_back(*min_element(lst.begin(), lst.end()));  // Add the min value
        else break;

        while (true) {
            auto it = find(lst.begin(), lst.end(), *result.rbegin());
            if (it != lst.end()) {
                lst.erase(it);                  // Remove the max value from the list
                break;
            }
        }
    }

    return result;
}