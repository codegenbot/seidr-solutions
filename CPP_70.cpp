#include <vector>

bool issame(int a, int b){
    return a == b;
}

vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    while(left <= right){
        result.push_back(lst[left++]);
        if(left <= right){
            if(!issame(lst[left], lst[right])) {
                result.push_back(lst[right--]);
            } else {
                right--;
            }
        }
    }
    return result;
}