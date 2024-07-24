#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& arr, int target) {
    map<int, int> numIndex;
    
    for(int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if(numIndex.find(complement) != numIndex.end()) {
            return {complement, arr[i]};
        }
        numIndex[arr[i]] = i;
    }
    
    return {0, 0}; // or throw an exception
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
    pair<int, int> res = findPair(arr, target);
    cout << res.first << " " << res.second << endl;
    return 0;
}