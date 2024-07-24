#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& arr, int target) {
    unordered_map<int, int> mp;
    
    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (mp.find(complement) != mp.end()) {
            return {complement, arr[i]};
        }
        mp[arr[i]] = i;
    }
    
    return {-1, -1}; // or any other default value
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;
    int target;
    cin >> target;
    pair<int, int> result = findPair(arr, target);
    cout << result.first << " " << result.second << endl;
    return 0;
}