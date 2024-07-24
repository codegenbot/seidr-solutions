#include <vector>
using namespace std;

vector<int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> mp;
    vector<int> res;
    
    for(int i=0; i<vec.size(); i++) {
        int complement = target - vec[i];
        if(mp.find(complement) != mp.end()) {
            res.push_back(vec[i]);
            res.push_back(complement);
            break;
        }
        mp[vec[i]] = i;
    }
    
    return res;
}

int main() {
    int n, a, b;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> a >> b;
        vector<int> vec({a, b});
        cout << findPair(vec, b).at(0) << " " << findPair(vec, b).at(1) << endl;
    }
    
    return 0;
}