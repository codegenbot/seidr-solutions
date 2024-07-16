#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> by_length_cpp105(vector<int> arr){
    vector<string> result;
    map<int, string> num_to_string = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, 
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };
    
    vector<int> valid_nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            valid_nums.push_back(num);
        }
    }
    
    sort(valid_nums.begin(), valid_nums.end());
    reverse(valid_nums.begin(), valid_nums.end());
    
    for (int num : valid_nums) {
        result.push_back(num_to_string[num]);
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return (a == b);
}

int main(){
    assert(issame(by_length_cpp105({9, 4, 8}), {"Nine", "Eight", "Four"}));
}