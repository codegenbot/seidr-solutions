#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> order_by_points(const vector<int>& nums){
    vector<int> result;
    vector<pair<int, int>> sums;
    
    for(int i=0; i<nums.size(); i++){
        int sum = 0;
        int num = nums[i];
        
        while(num != 0){
            sum += abs(num % 10);
            num /= 10;
        }
        
        sums.push_back(make_pair(sum, i));
    }
    
    sort(sums.begin(), sums.end());
    
    for(auto p : sums){
        result.push_back(nums[p.second]);
    }
    
    return result;
}

int main(){
    vector<int> expected = {-76, -21, 0, 4, 23, 6, 6};
    vector<int> result = order_by_points({0, 6, 6, -76, -21, 23, 4});

    cout << "Expected: ";
    for(auto num : expected){
        cout << num << " ";
    }
    
    cout << endl << "Result: ";
    for(auto num : result){
        cout << num << " ";
    }
    
    return 0;
}