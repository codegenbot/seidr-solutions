#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int min_diff = INT_MAX;
    int idx = 0;
    for (int i = 1; i <= vec.size(); i++) {
        if (i == vec.size() || vec[i] - vec[i-1] < min_diff) {
            min_diff = vec[i] - vec[i-1];
            idx = i;
        }
    }
    return {vector<int>({vec.begin(), vec.begin()+idx}), vector<int>({vec.begin()+idx, vec.end()})};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto& x : vec) cin >> x;
    auto res = cutVector(vec);
    cout << "{";
    for (const auto& x : res[0]) cout << x << " ";
    cout << "}" << endl;
    cout << "{";
    for (const auto& x : res[1]) cout << x << " ";
    cout << "}" << endl;
    return 0;
}