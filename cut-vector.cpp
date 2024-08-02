#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int split_index = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        int left_sum = 0;
        int right_sum = accumulate(v.begin() + i, v.end(), 0);
        
        if (abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            split_index = i;
        }
    }
    
    vector<int> left = {v[0]};
    for (int i = 1; i < split_index; i++) {
        left.push_back(v[i]);
    }
    
    vector<int> right = v;
    for (int i = 0; i < split_index; i++) {
        right.pop_back();
    }
    
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
        cout << result.first[i] << " ";
    }
    cout << "]" << endl;
    cout << "[";
    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second[i] << " ";
    }
    cout << "0]" << endl;
    return 0;
}