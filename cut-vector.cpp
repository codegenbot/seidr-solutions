#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int index = -1;
    
    for (int i = 0; i < vec.size() - 1; i++) {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            index = i;
        }
    }

    vector<vector<int>> result(2);
    result[0].insert(result[0].end(), vec.begin(), vec.begin() + index + 1);
    result[1].insert(result[1].begin(), vec.begin() + index, vec.end());
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    vector<vector<int>> res = cutVector(vec);
    for (auto v : res) {
        for (auto x : v) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}