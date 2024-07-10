#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& arr, int target) {
    unordered_map<int, int> mp;
    for (int num : arr) {
        int complement = target - num;
        if (mp.find(complement) != mp.end()) {
            return make_pair(num, complement);
        }
        mp[num] = 1;
    }
    return make_pair(-1, -1); // or return an empty pair {}
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    pair<int, int> result = findPair(arr, target);
    if (result.first != -1 && result.second != -1) {
        cout << result.first << "\n" << result.second << endl;
    } else {
        cout << "No pair found." << endl;
    }
    return 0;
}