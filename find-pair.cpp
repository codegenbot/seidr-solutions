#include <vector>
using namespace std;

vector<int> findPair(vector<vector<int>>& vec) {
    vector<int> result;
    for(int i = 0; i < vec.size(); i++) {
        int target = vec[i][2];
        bool found = false;
        for(int j = 0; j < vec[i][1]; j++) {
            for(int k = j + 1; k <= vec[i][1] - 1; k++) {
                if(vec[i][j] + vec[i][k] == target) {
                    result.push_back(vec[i][j]);
                    result.push_back(vec[i][k]);
                    found = true;
                    break;
                }
            }
            if(found) {
                break;
            }
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<vector<int>> vec(n);
        for(int j = 0; j < n; j++) {
            cin >> vec[j][0] >> vec[j][1];
        }
        cout << "#";
        for(int j = 0; j < n; j++) {
            cout << " " << vec[j][0] << " " << vec[j][1];
        }
        cout << endl;
    }
    return 0;
}