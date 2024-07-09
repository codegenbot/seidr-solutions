#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < vec.size(); i++) {
        int comp = target - vec[i];
        if (mp.find(comp) != mp.end()) {
            return {comp, vec[i]};
        }
        mp[vec[i]] = i;
    }
    return {-1, -1};
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    pair<int, int> result = findPair(arr, target);
    if(result.first != -1) {
        cout << result.first << endl;
        cout << result.second << endl;
    } else {
        cout << "-1" << endl;
        cout << "-1" << endl;
    }
    return 0;
}