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

vector<int> strange_sort_list(vector<int> lst);

int main() {
    // Test the function strange_sort_list
    vector<int> input = {3, 1, 4, 1, 5, 9, 2, 6};
    vector<int> output = strange_sort_list(input);
    vector<int> expected_output = {1, 6, 1, 5, 2, 4, 3, 9};

    if(issame(output, expected_output)){
        cout << "Test Passed!" << endl;
    } else {
        cout << "Test Failed!" << endl;
    }

    return 0;
}

vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end());
    vector<int> result;
    int left = 0, right = lst.size() - 1;
    while(left <= right){
        result.push_back(lst[left]);
        if(left != right){
            result.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return result;
}