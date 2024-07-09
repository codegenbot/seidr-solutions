#include<vector>
#include<algorithm>
using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    if (lst.empty()) return vector<int>();

    sort(lst.begin(), lst.end());
    
    int minVal = *min_element(lst.begin(), lst.end());
    int maxVal = *max_element(lst.begin(), lst.end());

    vector<int> result;
    while (!lst.empty() || !result.empty()) {
        if (lst.size() > 1) {
            size_t pos = distance(lst.begin(), min_element(lst.begin(), lst.end()));
            result.push_back(*lst.rbegin());
            lst.erase(prev(rbegin(lst), rbegin(lst) + 1));
        } else {
            result.push_back(minVal);
            result.push_back(maxVal);
            return result;
        }
    }

    return result;
}