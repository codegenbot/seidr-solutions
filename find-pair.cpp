#include <vector>
using namespace std;

pair<int, int> findPair(const vector<int>& vec, int target) {
    unordered_map<int, int> numMap;
    for (int num : vec) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            return make_pair(complement, num);
        }
        numMap[num] = 1;
    }
    return make_pair(-1, -1); // or throw an exception if you prefer
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    int target;
    cin >> target;
    pair<int, int> result = findPair(vec, target);
    cout << result.first << " " << result.second << endl;
    return 0;
}