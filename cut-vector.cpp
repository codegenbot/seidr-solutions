#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < n; ++i) {
        int sum_left = 0, sum_right = 0;
        
        for (int j = 0; j < i; ++j)
            sum_left += vec[j];
        
        for (int j = i; j < n; ++j)
            sum_right += vec[j];
        
        if (sum_left == sum_right) {
            return {{vec[0]}, vec.substr(1)};
        }
        
        int diff = abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left = {vec[0]};
    for (int i = 0; i < cut_index; ++i)
        left.push_back(vec[i]);
    
    vector<int> right = vec.substr(cut_index);
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
        cin >> vec[i];
    
    pair<vector<int>, vector<int>> res = cutVector(vec);
    
    cout << "[";
    for (int i = 0; i < res.first.size(); ++i) {
        if (i == res.first.size() - 1)
            cout << res.first[i];
        else
            cout << res.first[i] << ", ";
    }
    cout << "], [";
    for (int i = 0; i < res.second.size(); ++i) {
        if (i == res.second.size() - 1)
            cout << res.second[i];
        else
            cout << res.second[i] << ", ";
    }
    cout << "0]" << endl;
    
    return 0;
}