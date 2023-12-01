#include <vector>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end());
    vector<int> result;
    int left = 0, right = lst.size() - 1;
    bool isLeft = true;
    while (left <= right) {
        if (isLeft) {
            result.push_back(lst[left]);
            left++;
        } else {
            result.push_back(lst[right]);
            right--;
        }
        isLeft = !isLeft;
    }
    return result;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    // Add more test cases if needed
    assert(issame(strange_sort_list({5, 4, 3, 2, 1}), {1, 5, 2, 4, 3}));
    assert(issame(strange_sort_list({9, 3, 1, 7, 5}), {1, 9, 3, 7, 5}));
    
    return 0;
}