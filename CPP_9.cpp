#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> rolling_max(vector<int> numbers);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int max_val = INT_MIN;
    for(int i=0; i<numbers.size(); i++){
        max_val = max(max_val, numbers[i]);
        result.push_back(max_val);
    }
    return result;
}

int main(){
    vector<int> nums = {1, 3, 5, 2, 4, 6};
    vector<int> max_nums = rolling_max(nums);
    for(int num : max_nums){
        cout << num << " ";
    }
    return 0;
}