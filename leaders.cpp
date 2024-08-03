#include <vector>
using namespace std;

int main() {
    vector<int> leaders(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        
        for(int i=n-1; i>=0; i--){
            bool leader = true;
            for(int j=i+1; j<n; j++){
                if(nums[j] >= nums[i]){
                    leader = false;
                    break;
                }
            }
            if(leader) res.push_back(nums[i]);
        }
        
        return res;
    }

    int main() {
        vector<int> input = {16, 17, 4, 3, 5, 2, 3, 7, 1, 6};
        vector<int> result = leaders(input);
        for(int i=0; i<result.size(); i++) {
            cout << result[i] << " ";
        }
        return 0;
    }