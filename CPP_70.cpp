#include<iomanip>

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> minMax;
    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());
        minMax.push_back(min);
        lst.erase(remove(lst.begin(), lst.end(), min), lst.end());
        minMax.push_back(max);
        lst.erase(remove(lst.begin(), lst.end(), max), lst.end());
    }
    return result;
}