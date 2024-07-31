#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b);

vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> valid_nums;
    
    for(int num : arr){
        if(num >= 1 && num <= 9){
            valid_nums.push_back(num);
        }
    }
    
    sort(valid_nums.begin(), valid_nums.end());
    reverse(valid_nums.begin(), valid_nums.end());
    
    map<int, string> num_to_name = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };
    
    for(int num : valid_nums){
        result.push_back(num_to_name[num]);
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<int> test_input = {3, 2, 1, 5, 4, 6, 9, 8, 7};
    vector<string> expected_output = {"Nine", "Eight", "Seven", "Six", "Five", "Four", "Three", "Two", "One"};
    
    vector<string> result = by_length(test_input);
    
    assert(issame(result, expected_output));
    
    return 0;
}