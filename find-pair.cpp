#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        if (numIndex.find(complement) != numIndex.end()) {
            return {complement, vec[i]};
        }
        numIndex[vec[i]] = i;
    }
    return {-1, -1}; // or any other default value
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto& x : vec) {
        cin >> x;
    }
    int target;
    cin >> target;
    pair<int, int> result = findPair(vec, target);
    cout << result.first << " " << result.second << endl;
    return 0;
}