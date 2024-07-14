#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int idx = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        int left_sum = 0, right_sum = 0;
        
        if (i == 1)
            left_sum = v[i - 1];
        else
            for (int j = 0; j < i; j++)
                left_sum += v[j];
        
        right_sum = accumulate(v.begin() + i, v.end(), 0);
        
        int diff = abs(left_sum - right_sum);
        
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    
    vector<int> left, right;
    for (int i = 0; i < idx; i++)
        left.push_back(v[i]);
    for (int i = idx; i < v.size(); i++)
        right.push_back(v[i]);
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& x : v)
        cin >> x;

    pair<vector<int>, vector<int>> result = cutVector(v);

    cout << "[";

    for (const auto& x : result.first) {
        cout << x << " ";
    }
    cout << "] [";

    for (const auto& x : result.second) {
        cout << x << " ";
    }

    cout << "]" << endl;
    
    return 0;
}