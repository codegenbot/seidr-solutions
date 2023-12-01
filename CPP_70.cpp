#include <vector>

bool issame(vector<int> lst1, vector<int> lst2){
    if(lst1.size() != lst2.size()){
        return false;
    }
    for(int i=0; i<lst1.size(); i++){
        if(lst1[i] != lst2[i]){
            return false;
        }
    }
    return true;
}

vector<int> strange_sort_list(vector<int> lst);

int main() {
    vector<int> input = {5, 2, 8, 4, 1, 9};
    vector<int> expected_output = {1, 9, 2, 8, 4, 5};
    vector<int> output = strange_sort_list(input);
    assert(issame(output, expected_output));
    return 0;
}

vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0;
    int right = lst.size() - 1;
    while (left <= right) {
        if (left == right) {
            result.push_back(lst[left]);
        } else {
            result.push_back(lst[left]);
            result.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return result;
}