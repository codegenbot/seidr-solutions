#include <vector>
using namespace std;

pair<int, int> findPair(const vector<int>& vec, int target) {
    unordered_map<int, int> map;
    
    for (int num : vec) {
        int complement = target - num;
        if (map.find(complement) != map.end()) {
            return {complement, num};
        }
        map[num] = 1;
    }
    
    return {{0, 0}}; // or throw an exception
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto& x : vec) cin >> x;

    int target;
    cin >> target;

    pair<int, int> result = findPair(vec, target);

    cout << result.first << endl;
    cout << result.second << endl;

    return 0;
}