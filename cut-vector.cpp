#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < v.size() - 1; i++) {
        int sum1 = 0, sum2 = 0;
        
        for (int j = 0; j <= i; j++) {
            sum1 += v[j];
        }
        
        for (int j = i + 1; j < v.size(); j++) {
            sum2 += v[j];
        }
        
        int diff = abs(sum1 - sum2);
        
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
    
    cout << "Left: ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "Right: ";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}