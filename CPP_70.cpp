#include <algorithm>
#include <vector>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        result.push_back(minVal);
        lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
        if (!lst.empty()) {
            int maxVal = *max_element(lst.begin(), lst.end());
            result.push_back(maxVal);
            lst.erase(std::remove(lst.begin(), lst.end(), maxVal), lst.end());
        }
    }
    return result;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}