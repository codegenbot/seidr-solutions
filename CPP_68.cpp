#include <vector>
#include <cassert>

vector<int> pluck(vector<int> arr);

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

vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallest_even = -1;
    int smallest_index = -1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && (smallest_even == -1 || arr[i] < smallest_even)){
            smallest_even = arr[i];
            smallest_index = i;
        }
    }
    if(smallest_even != -1){
        result.push_back(smallest_even);
        result.push_back(smallest_index);
    }
    return result;
}

int main() {
    // Test the pluck function
    vector<int> test_input = {3, 5, 2, 8, 6, 4};
    vector<int> expected_output = {2, 2};
    vector<int> output = pluck(test_input);
    assert(issame(output, expected_output));
    
    return 0;
}