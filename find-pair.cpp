#include <vector>
#include <unordered_map>
#include <iostream>
#include <ostream>

using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> numIndex;
    
    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        if (numIndex.find(complement) != numIndex.end()) {
            return {complement, vec[i]};
        }
        numIndex[vec[i]] = i;
    }
    
    return {-1, -1};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int& x : vec) cin >> x;
    int target;
    cin >> target;
    pair<int, int> result = findPair(vec, target);
    if (result.first != -1 && result.second != -1) {
        cout << result.first << " " << result.second << endl;
    } else {
        cout << "No two sum" << endl;
    }
    return 0;
}