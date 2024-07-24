#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int min_diff = INT_MAX;
    int index = 0;
    
    for (int i = 1; i <= n / 2; ++i) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; ++j)
            left_sum += vec[j];
        for (int j = i; j < n; ++j)
            right_sum += vec[j];
        
        if (left_sum == right_sum) {
            return {{vec.begin(), vec.begin() + i}, {vec.begin() + i, vec.end()}};
        } else if (abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            index = i;
        }
    }
    
    int left_sum = 0, right_sum = 0;
    for (int i = 0; i < n; ++i)
        left_sum += vec[i];
    for (int i = 1; i < n; ++i)
        right_sum += vec[i];
    
    if (left_sum == right_sum) {
        return {{vec.begin(), vec.end()}, {}};
    } else {
        int diff = abs(left_sum - right_sum);
        vector<int> left, right;
        for (int i = 0; i < n - index; ++i)
            left.push_back(vec[i]);
        for (int i = index; i < n; ++i)
            right.push_back(vec[i]);
        return {left, right};
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "[";
    for (int i = 0; i < result.first.size(); ++i)
        cout << result.first[i] << " ";
    cout << "] [";
    for (int i = 0; i < result.second.size(); ++i)
        cout << result.second[i] << " ";
    cout << "]" << endl;
    
    return 0;
}