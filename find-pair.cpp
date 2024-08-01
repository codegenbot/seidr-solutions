#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    map<int, int> mp;
    
    for (int i = 0; i < vec.size(); i++) {
        int n = vec[i];
        int comp = target - n;
        
        if (mp.find(comp) != mp.end()) {
            return {comp, n};
        }
        
        mp[n] = i;
    }
    
    pair<int, int> p = {-1, -1}; // default value
    return p;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    
    for (auto& x : vec) cin >> x;
    
    int target;
    cin >> target;
    
    pair<int, int> res = findPair(vec, target);
    
    cout << res.first << " " << res.second << endl;
    
    return 0;
}