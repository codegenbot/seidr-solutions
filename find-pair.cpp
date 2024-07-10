#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> numMap;
    
    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        if (numMap.count(complement)) {
            return {complement, vec[i]};
        }
        numMap[vec[i]] = i;
    }
    
    return {-1, -1}; // Return an empty pair if no such pair is found
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
    if(result.first != -1 && result.second != -1) {
        cout << result.first << " " << result.second << endl;
    } else {
        cout << "No such pair found" << endl;
    }
    
    return 0;
}