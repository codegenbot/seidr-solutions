#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || v[i] != v[i-1]) {
            res[0].push_back(v[i]);
        } else {
            res[0].pop_back();
            res[1].push_back(v[i]);
            break;
        }
    }
    
    return res;
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
    for (int i = 0; i < result[0].size(); i++) {
        cout << result[0][i] << " ";
    }
    cout << "]" << endl;

    cout << "[";
    for (int i = 0; i < result[1].size(); i++) {
        cout << result[1][i] << " ";
    }
    cout << "0]" << endl;

    return 0;
}