#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0;
    int right = lst.size() - 1;
    while (left <= right) {
        if (left == right) {
            result.push_back(lst[left]);
            break;
        }
        result.push_back(lst[left]);
        result.push_back(lst[right]);
        left++;
        right--;
    }
    return result;
}

int main(){
    assert(issame(strange_sort_list({111111}), {111111}));
    assert(issame(strange_sort_list({3,2,8,5,9}), {2,9,3,8,5}));
    assert(issame(strange_sort_list({10,20,30,40,50}), {10,50,20,40,30}));
    return 0;
}