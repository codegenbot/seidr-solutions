#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[i-1]);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].resize(cut_index);
    result[1].resize(v.size() - cut_index);
    
    for (int i = 0; i < cut_index; i++) {
        result[0][i] = v[i];
    }
    
    for (int i = cut_index, j = 0; i < v.size(); i++, j++) {
        result[1][j] = v[i];
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
    
    vector<vector<int>> res = cutVector(v);
    for (auto &vec : res) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}