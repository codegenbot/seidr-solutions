using namespace std;

int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int target = sum / 2;
    int prefixSum = 0;
    int idx = -1;
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        if (prefixSum >= target) {
            idx = i;
            break;
        }
    }
    
    vector<int> subVec1(nums.begin(), nums.begin() + idx + 1);
    vector<int> subVec2(nums.begin() + idx + 1, nums.end());
    
    for (int num : subVec1) {
        cout << num << endl;
    }
    for (int num : subVec2) {
        cout << num << endl;
    }
    
    return 0;
}