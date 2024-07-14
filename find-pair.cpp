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
    return {-1, -1};
}

int main() {
    int n, x;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> x;
    pair<int, int> p = findPair(v, x);
    cout << p.first << endl << p.second << endl;
    return 0;
}