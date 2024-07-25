#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> map;
    
    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        
        if (map.find(complement) != map.end()) {
            return {complement, vec[i]};
        }
        
        map[vec[i]] = i;
    }
    
    throw runtime_error("No pair found");
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
    
    try {
        pair<int, int> result = findPair(vec, target);
        cout << result.first << endl;
        cout << result.second << endl;
    } catch (runtime_error& e) {
        cout << "No pair found" << endl;
    }
    
    return 0;
}