#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) {
        return result;
    }
    int min_val = *min_element(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(min_val);
        auto it = std::remove_if(lst.begin(), lst.end(), [min_val](int x) { return x == min_val; });
        lst.erase(it, lst.end());
        if (lst.empty()) break;
        min_val = *max_element(lst.begin(), lst.end());
    }
    return result;
}

int main() {
    vector<int> test = {111111};
    assert(issame(strange_sort_vector(test),vector<int>({111111})));
    return 0;
}