#include <vector>
using namespace std;

vector<int> findPair(vector<int>& vec, int target) {
    vector<int> pair;
    unordered_set<int> numSet(vec.begin(), vec.end());

    for (int num : vec) {
        int complement = target - num;
        if (numSet.count(complement)) {
            pair.push_back(num);
            pair.push_back(complement);
            break;
        }
    }

    return pair;
}

int main() {
    int n, t;
    cin >> n;

    vector<int> vec(n);
    for (auto &x : vec) cin >> x;

    cin >> t;
    
    vector<int> result = findPair(vec, t);

    cout << result[0] << " " << result[1];
    
    return 0;
}