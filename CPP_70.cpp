#include <algorithm>
using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    
    while (!lst.empty()) {
        result.push_back(lst[0]);
        lst.erase(lst.begin());
        if (!lst.empty())
            lst.pop_back();
    }
    
    return result;
}