```cpp
#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& arr, int target) {
    map<int, int> mp;
    
    for(int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        
        if(mp.find(complement) != mp.end()) {
            return {complement, arr[i]};
        }
        mp[arr[i]] = i;
    }
    
    return {-1, -1};
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

    pair<int, int> result = findPair(arr, target);

    cout << result.first << endl;
    cout << result.second << endl;

    return 0;
}