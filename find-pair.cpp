#include <vector>
using namespace std;

vector<int> findPair(vector<int>& arr, int target) {
    unordered_map<int, int> numIndex;
    for(int i=0; i<arr.size(); i++) {
        int complement = target - arr[i];
        if(numIndex.find(complement) != numIndex.end()) {
            return {complement, arr[i]};
        }
        numIndex[arr[i]] = i;
    }
    vector<int> result = {-1, -1};
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    
    vector<int> pair = findPair(arr, target);
    cout << pair[0] << " " << pair[1] << endl;

    return 0;
}