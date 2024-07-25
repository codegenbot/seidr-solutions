#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int maximum(vector<int> nums, int start){
    int max_element = nums[start];
    for(int i = start + 1; i < nums.size(); i++){
        if(nums[i] > max_element){
            max_element = nums[i];
        }
    }
    return max_element;
}

int main(){
    assert(issame(vector<int>{1, 2, 3, -23, 243, -400, 0}, vector<int>{243}));
    return 0;
}