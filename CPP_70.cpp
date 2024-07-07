#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<vector<int>> strange_sort_list(vector<int> lst) {
    vector<vector<int>> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        vector<int> temp;
        for(int i = 0; i < lst.size(); i++) {
            if(lst[i] != min_val) temp.push_back(lst[i]);
        }
        result.push_back(temp);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
    }
    return result;