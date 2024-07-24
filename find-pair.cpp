#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        if (map.find(complement) != map.end()) {
            return {complement, vec[i]};
        }
        map[vec[i]] = i;
    }
    return {-1, -1}; // or throw an exception
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto& x : vec) cin >> x;

    int target;
    cin >> target;

    pair<int, int> result = findPair(vec, target);

    if (result.first != -1 && result.second != -1)
        cout << result.first << '\n' << result.second << '\n';
    else
        cout << "No pair found.\n";

    return 0;
}