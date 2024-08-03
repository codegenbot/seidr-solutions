#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    
    if(n == 0) return res;
    
    res.push_back(nums[n-1]);
    
    for(int i=n-2; i>=0; i--){
        if(res.back() < nums[i]){
            res.clear();
            res.push_back(nums[i]);
        } else {
            res.push_back(nums[i]);
        }
    }
    
    return res;
}

int main() {
    vector<int> input = {1, 2, 8, 10};
    vector<int> result = leaders(input);
    for (int num : result) {
        cout << num << endl;
    }
    return 0;
}