#include <vector>
using namespace std;

vector<int> findPair(vector<int>& vec, int target) {
    vector<int> result;
    for (int i = 0; i < vec.size(); i++) {
        for (int j = i + 1; j < vec.size(); j++) {
            if (vec[i] + vec[j] == target) {
                result.push_back(vec[i]);
                result.push_back(vec[j]);
                return result;
            }
        }
    }
    result.push_back(-1);
    return result;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        int target;
        cin >> target;
        vector<int> res = findPair(vec, target);
        cout << res[0] << " " << res[1] << endl;
    }
    return 0;
}