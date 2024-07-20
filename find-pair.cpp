#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                result.push_back(nums[i]);
                result.push_back(nums[j]);
                return result;
            }
        }
    }
    return result;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> v;
    while(n--) {
        cin >> x;
        v.push_back(x);
    }

    int target;
    cin >> target;

    vector<int> res = findPair(v, target);

    cout << res[0] << endl << res[1] << endl;

    return 0;
}