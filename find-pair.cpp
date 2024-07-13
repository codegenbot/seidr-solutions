#include <vector>
using namespace std;

pair<int,int> findPair(vector<int>& arr, int target) {
    unordered_map<int, int> mp;
    for(int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if(mp.find(complement) != mp.end()) {
            return {complement, arr[i]};
        }
        mp[arr[i]] = i;
    }
    return {-1,-1}; // return pair(-1,-1) if no such pair found
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    pair<int,int> res = findPair(arr, target);
    cout << res.first << "\n";
    cout << res.second << "\n";
    return 0;
}