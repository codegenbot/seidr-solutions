#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < v.size() - 1; i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j <= i; j++) {
            left_sum += v[j];
        }
        
        for (int j = i + 1; j < v.size(); j++) {
            right_sum += v[j];
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + cut_index + 1);
    vector<int> right(v.begin() + cut_index, v.end());
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "[";
    for (int i = 0; i < result.first.size(); i++) {
        cout << result.first[i];
        if (i < result.first.size() - 1) {
            cout << " ";
        }
    }
    cout << "] [";
    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second[i];
        if (i < result.second.size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;
    
    return 0;
}