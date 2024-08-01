#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || vec[i] != vec[0]) {
            vector<int> left;
            for (int j = 0; j <= i; j++) {
                left.push_back(vec[j]);
            }
            int diff = abs(left.back() - vec[i]);
            for (int k = i + 1; k < n; k++) {
                if (vec[k] != left.back() || abs(vec[k] - left.back()) > diff) {
                    break;
                }
                left.push_back(vec[k]);
            }
            result.push_back(left);
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec) {
        cin >> x;
    }
    vector<vector<int>> res = cutVector(vec);
    for (const auto &v : res) {
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}