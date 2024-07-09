#include <algorithm>
using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    if (lst.empty()) return lst;
    
    vector<int> result;
    sort(lst.begin(), lst.end());
    int min = *min_element(lst.begin(), lst.end());
    int max = *max_element(lst.begin(), lst.end());

    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] == min) {
            result.push_back(min);
            while (i < lst.size() && lst[i] == min) {
                lst.erase(lst.begin() + i);
                i--;
            }
        } else if (lst[i] == max) {
            result.push_back(max);
            while (i < lst.size() && lst[i] == max) {
                lst.erase(lst.begin() + i);
                i--;
            }
        } else {
            result.push_back(lst[i]);
        }
    }

    return result;
}