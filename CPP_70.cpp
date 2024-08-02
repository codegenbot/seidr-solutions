#include <algorithm>
#include <vector>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    int minVal = *min_element(lst.begin(), lst.end());
    int maxVal = *max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        auto itMin = std::find(lst.begin(), lst.end(), minVal);
        vector<int> temp;
        if (itMin != lst.end()) {
            temp.push_back(*itMin);
            lst.erase(itMin);
        }
        auto itMax = std::find(lst.begin(), lst.end(), maxVal);
        if (itMax != lst.end()) {
            temp.push_back(*itMax);
            lst.erase(itMax);
        }
        for (int i : temp) {
            result.push_back(i);
        }
    }

    return result;
}