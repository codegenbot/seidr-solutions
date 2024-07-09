#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < v.size() - 1; i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j <= i; j++)
            left_sum += v[j];
        for (int j = i + 1; j < v.size(); j++)
            right_sum += v[j];
        
        if (left_sum == right_sum) {
            return {{v.begin(), v.begin() + i + 1}, {v.begin() + i + 1, v.end()}};
        }
        int diff = abs(left_sum - right_sum);
        
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    return {{v.begin(), v.begin() + cut_index + 1}, {v.begin() + cut_index + 1, v.end()}};
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    vector<vector<int>> result = cutVector(v);
    cout << "[";
    for (int i = 0; i < result[0].size(); i++)
        cout << result[0][i] << " ";
    cout << "] [";
    for (int i = 0; i < result[1].size(); i++)
        cout << result[1][i] << " ";
    cout << "]\n";
    
    return 0;
}