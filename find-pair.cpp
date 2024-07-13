#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    unordered_map<int, int> numMap;

    for (int num : nums) {
        int complement = target - num;
        if (numMap.count(complement)) {
            result = {complement, num};
            break;
        }
        numMap[num] = 1;
    }

    return result;
}

int main() {
    int n, a, b;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (i == 0) continue;
        vector<int> pair = findPair({a}, a);
        cout << pair[0] << " ";
        cout << pair[1] << endl;
    }

    return 0;
}