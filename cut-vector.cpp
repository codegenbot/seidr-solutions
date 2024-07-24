#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    pair<int, int> split_index;
    
    for (int i = 1; i < vec.size(); ++i) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; ++j) {
            sum1 += vec[j];
        }
        for (int j = i; j < vec.size(); ++j) {
            sum2 += vec[j];
        }
        
        int diff = abs(sum1 - sum2);
        if (diff < min_diff) {
            min_diff = diff;
            split_index = {i, i};
        } else if (diff == min_diff) {
            split_index.first = i;
        }
    }
    
    vector<int> left(vec.begin(), vec.begin() + split_index.first);
    vector<int> right(vec.begin() + split_index.second, vec.end());
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n+1);
    for (int i = 0; i <= n; ++i) {
        cin >> vec[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "[";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "] [" << endl;
    cout << "[";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << "] 0" << endl;

    return 0;
}