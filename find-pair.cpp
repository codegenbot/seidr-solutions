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
    return {-1, -1};
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    int target;
    cin >> target;
    
    pair<int, int> result = findPair(numbers, target);
    cout << result.first << endl;
    cout << result.second << endl;

    return 0;
}