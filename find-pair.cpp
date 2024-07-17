Here is the solution:

#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& arr, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (map.find(complement) != map.end()) {
            return {complement, arr[i]};
        }
        map[arr[i]] = i;
    }
    return {}; // or throw an exception if no pair is found
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
    pair<int, int> pair = findPair(arr, target);
    cout << pair.first << endl;
    cout << pair.second << endl;
    return 0;
}