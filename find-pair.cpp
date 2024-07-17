#include <iostream>
#include <vector>
#include <unordered_map>
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
    return {-1, -1};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int& x : vec) {
        cin >> x;
    }
    int target;
    cin >> target;
    
    pair<int, int> p = findPair(vec, target);
    cout << p.first << " " << p.second << endl;

    return 0;