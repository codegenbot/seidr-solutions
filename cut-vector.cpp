#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i+1]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    return {{v.begin(), v.begin() + cut_index}, {v.begin() + cut_index, v.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> result = cutVector(v);
    
    cout << "[";
    for (int num : result[0]) {
        cout << num << " ";
    }
    cout << "] [" << result[1][0];
    for (int i = 1; i < result[1].size(); i++) {
        cout << " " << result[1][i];
    }
    cout << "]" << endl;
    
    return 0;
}