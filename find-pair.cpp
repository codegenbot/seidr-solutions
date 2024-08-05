#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < vec.size(); i++) {
        int n = vec[i];
        int complement = target - n;
        if (mp.find(complement) != mp.end()) {
            return make_pair(n, complement);
        }
        mp[n] = i;
    }
    return make_pair(0, 0);
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int target;
    cin >> target;
    pair<int, int> result = findPair(vec, target);
    cout << result.first << endl;
    cout << result.second << endl;
    return 0;
}