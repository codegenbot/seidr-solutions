#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].resize(cut_index + 1);
    for (int i = 0; i <= cut_index; i++) {
        result[0].push_back(v[i]);
    }
    result[1].resize(v.size() - cut_index - 1);
    for (int i = cut_index + 1; i < v.size(); i++) {
        result[1].push_back(v[i]);
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> result = cutVector(v);
    
    for (auto &v : result) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}