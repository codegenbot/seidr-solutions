#include <vector>
#include <iostream>

using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < vec.size(); i++) {
        int x = vec[i];
        if (mp.find(target - x) != mp.end()) {
            return pair<int, int>(x, target - x);
        }
        mp[x] = i;
    }
    return pair<int, int>(-1, -1); // or throw an exception
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
    
    pair<int, int> p = findPair(vec, target);
    if (p.first != -1) {
        cout << p.first << " " << p.second << endl;
    } else {
        cout << "Not found" << endl;
    }
    
    return 0;
}