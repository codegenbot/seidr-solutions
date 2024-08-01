#include <vector>
#include <unordered_map>
#include <iostream> 

using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        if (mp.find(complement) != mp.end()) {
            return {complement, vec[i]};
        }
        mp[vec[i]] = i;
    }
    return {};
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
    cout << result.first << " " << result.second << endl;
    return 0;
}