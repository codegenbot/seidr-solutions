#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<int> pair;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            pair.push_back(nums[i]);
            pair.push_back(complement);
            break;
        }
        numMap[nums[i]] = i;
    }

    return pair;
}

int main() {
    int n, x1, y1, x2, y2;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1;
        vector<int> result = findPair({x1, y1}, x1 + y1);
        cout << result[0] << " " << result[1] << endl;
    }
    
    return 0;
}