#include <algorithm>
using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> minMax;
    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());
        lst.erase(remove(lst.begin(), lst.end(), minVal), lst.end());
        lst.erase(remove(lst.begin(), lst.end(), maxVal), lst.end());
        result.push_back(minVal);
        result.push_back(maxVal);
    }
    return result;
}