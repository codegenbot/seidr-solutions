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
    
    return {-1, -1}; // Return {-1, -1} if no pair found
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
    
    if(result.first != -1) {
        cout << result.first << endl;
        cout << result.second << endl;
    } else {
        cout << "No pair found" << endl;
    }
    
    return 0;
}