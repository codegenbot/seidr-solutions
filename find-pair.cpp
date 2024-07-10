#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> hash;
    
    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        
        if (hash.find(complement) != hash.end()) {
            return make_pair(vec[i], complement);
        }
        
        hash[vec[i]] = i;
    }
    
    return make_pair(-1, -1); // or throw an exception
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
    
    pair<int, int> res = findPair(vec, target);
    
    cout << res.first << "\n" << res.second << "\n";
    
    return 0;
}