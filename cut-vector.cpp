#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < n; ++i) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; ++j)
            left_sum += v[j];
        for (int j = i; j < n; ++j)
            right_sum += v[j];
        
        if (left_sum == right_sum) {
            return {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        }
        
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j <= i; ++j)
            left_sum += v[j];
        for (int j = i + 1; j < n; ++j)
            right_sum += v[j];
        
        if (left_sum == right_sum) {
            return {{v.begin(), v.begin() + cut_index}, {v.begin() + cut_index, v.end()}};
        }
    }
    
    return {{v.begin(), v.begin()}, {v.begin(), v.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "[";
    for (int x : result.first) {
        cout << x;
        if (&x != &result.first.back())
            cout << " ";
    }
    cout << "] [";
    for (int x : result.second) {
        cout << x;
        if (&x != &result.second.back())
            cout << " ";
    }
    cout << "]" << endl;
    
    return 0;
}