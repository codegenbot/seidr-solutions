#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int,int> numMap;
    for(int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if(numMap.find(complement) != numMap.end()) {
            return vector<int>{complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    return {};
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(i == n - 1) break;
    }
    int target;
    cin >> target;
    cout << "(";
    vector<int> result = findPair({x}, target);
    cout << result[0] << "," << result[1];
    return 0;
}