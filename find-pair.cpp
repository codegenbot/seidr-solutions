#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& arr, int target) {
    unordered_map<int, int> mp;
    
    for (int i = 0; i < arr.size(); i++) {
        int n = target - arr[i];
        if (mp.find(n) != mp.end()) {
            return {n, arr[i]};
        }
        mp[arr[i]] = i;
    }
    
    return {-1, -1};
}

int main() {
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> n;
        vector<int> v(n);
        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }
        cin >> n;
        target = n;
        pair<int, int> p = findPair(v, target);
        if(p.first != -1) {
            cout << p.first << " " << p.second << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}