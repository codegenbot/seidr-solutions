#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int pos = 0;
    
    for(int i = 1; i <= n/2; i++){
        int left_sum = 0, right_sum = 0;
        for(int j = 0; j < i; j++){
            left_sum += v[j];
        }
        for(int k = i; k<n; k++){
            right_sum += v[k];
        }
        
        if(abs(left_sum - right_sum) < min_diff){
            min_diff = abs(left_sum - right_sum);
            pos = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].resize(pos);
    for(int i = 0; i < pos; i++){
        result[0].push_back(v[i]);
    }
    result[1].resize(n-pos);
    for(int i = pos; i < n; i++){
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

    vector<vector<int>> res = cutVector(v);

    cout << "[";
    for (int i = 0; i < res[0].size(); i++) {
        cout << res[0][i];
        if (i != res[0].size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;

    cout << "[";
    for (int i = 0; i < res[1].size(); i++) {
        cout << res[1][i];
        if (i != res[1].size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;

    return 0;
}