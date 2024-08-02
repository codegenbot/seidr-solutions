#include <vector>
using namespace std;

pair<int, int> findPair(const vector<int>& vec, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        if (mp.find(complement) != mp.end()) {
            return {complement, vec[i]};
        }
        mp[vec[i]] = i;
    }
    return {{-1, -1}};  // or throw an exception
}

int main() {
    int numCases;
    cin >> numCases;
    for (int i = 0; i < numCases; i++) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (auto& x : vec) {
            cin >> x;
        }
        int target;
        cin >> target;
        pair<int, int> p = findPair(vec, target);
        if(p.first == -1 && p.second == -1){
            cout << "NULL" << endl;
        }else{
            cout << p.first << "\n" << p.second << endl;
        }
    }
    return 0;
}