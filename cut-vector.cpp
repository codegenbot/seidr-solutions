#include <vector>
#include <cmath> 
using namespace std;

tuple<vector<int>, vector<int>> cutVector(vector<int>& nums) { 
    int n = nums.size();
    vector<int> res1;
    vector<int> res2;
    
    for(int i=0; i<n-1; i++){
        if(abs(nums[i]-nums[i+1]) <= abs(nums[0]-nums[n-1])){
            res1.insert(res1.end(), nums.begin(), nums.begin()+i+1);
            res2 = nums;
            res2.erase(res2.begin()+i, res2.end());
            break;
        }
    }
    
    if(abs(nums[0]-nums[n-1]) <= abs(nums[0]-nums[1])){
        res1.insert(res1.end(), nums.begin(), nums.end());
    } else {
        res1 = nums;
        res1.erase(res1.begin()+1, res1.end());
    }

    return make_tuple(res1, res2);