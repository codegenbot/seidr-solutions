#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &nums) {
    int min_diff = INT_MAX;
    pair<int, int> split_pos;
    
    for(int i=1; i<nums.size(); i++) {
        int left_sum = 0, right_sum = 0;
        
        for(int j=0; j<i; j++) 
            left_sum += nums[j];
            
        for(int j=i; j<nums.size(); j++)
            right_sum += nums[j];
        
        if(left_sum == right_sum) {
            return {{nums[0]}, {nums[i-1], nums[i]}};
        }
        
        int diff = abs(left_sum - right_sum);
        if(diff < min_diff) {
            min_diff = diff;
            split_pos.first = i-1;
            split_pos.second = i;
        }
    }

    return {{}, {nums[0]}};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n+1);
    for(int i=0; i<=n; i++)
        cin >> nums[i];

    pair<vector<int>, vector<int>> res = cutVector(nums);

    cout << "[";
    for(auto num : res.first) 
        cout << num << " ";
    cout << "] [";

    for(auto num : res.second) 
        cout << num << " ";

    cout << "]" << endl;
    
    return 0;
}