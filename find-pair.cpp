#include <vector>
using namespace std;

pair<int, int> findPair(const vector<int>& arr, int target) {
    unordered_map<int, int> map;
    for (int num : arr) {
        int complement = target - num;
        if (map.find(complement) != map.end()) {
            return {complement, num};
        }
        map[num] = 1;
    }
    return {-1, -1}; // Return empty pair if no such pair exists
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
    auto result = findPair(arr, target);
    cout << result.first << " " << result.second << endl;
    return 0;
}