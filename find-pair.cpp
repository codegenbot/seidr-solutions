#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < vec.size(); i++) {
        int x = vec[i];
        int y = target - x;
        if (map.find(y) != map.end()) {
            return {y, x};
        }
        map[x] = i;
    }
    return {0, 0}; // or throw an exception
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
    cout << res.first << " " << res.second << endl;
    return 0;
}