#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& arr, int target) {
    unordered_map<int, int> numMap;
    
    for(int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if(numMap.find(complement) != numMap.end()) {
            return {complement, arr[i]};
        }
        numMap[arr[i]] = i;
    }
    
    return {-1, -1}; // Return default pair if no pair found
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
    
    auto p = findPair(arr, target);
    cout << p.first << " " << p.second << endl;
    
    return 0;
}