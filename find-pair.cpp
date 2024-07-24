#include <vector>
using namespace std;

vector<int> findPair(vector<int>& arr, int target) {
    unordered_map<int, int> map;
    
    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        
        if (map.find(complement) != map.end()) {
            return {complement, arr[i]};
        }
        
        map[arr[i]] = i;
    }
    
    return {};
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
    
    vector<int> result = findPair(numbers, target);
    
    if (!result.empty()) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }
    
    return 0;
}