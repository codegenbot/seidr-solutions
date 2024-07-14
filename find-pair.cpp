#include <vector>
using namespace std;

pair<int, int> findPair(const vector<int>& vec, int target) {
    unordered_map<int, int> numMap;
    
    for (int i = 0; i < vec.size(); i++) {
        int currentNum = vec[i];
        int complement = target - currentNum;
        
        if (numMap.find(complement) != numMap.end()) {
            return {complement, currentNum};
        }
        
        numMap[currentNum] = i;
    }
    
    return {-1, -1}; // or throw an exception
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