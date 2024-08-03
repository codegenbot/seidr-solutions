#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; j++) {
            left_sum += v[j];
        }
        
        for (int k = i; k < v.size(); k++) {
            right_sum += v[k];
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    return {{vector<int>(v.begin(), v.begin() + cut_index)}, {vector<int>(v.begin() + cut_index, v.end())}};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> result = cutVector(v);
    
    for (const auto& subv : result) {
        for (int num : subv) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}