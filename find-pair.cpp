#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int,int> map;
    vector<int> result;
    
    for(int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        if(map.find(complement) != map.end()) {
            return {complement, nums[i]};
        }
        
        map[nums[i]] = i;
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    int target;
    cin >> target;
    vector<int> res = findPair(numbers, target);
    cout << res[0] << endl;
    cout << res[1] << endl;
    
    return 0;
}