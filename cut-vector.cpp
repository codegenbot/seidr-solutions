#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    pair<int, int> split_index;
    
    for (int i = 1; i < vec.size(); i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; j++) {
            left_sum += vec[j];
        }
        
        for (int k = i; k < vec.size(); k++) {
            right_sum += vec[k];
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff <= min_diff) {
            min_diff = diff;
            split_index = make_pair(i, i);
        }
    }
    
    vector<int> left_vec, right_vec;
    
    for (int i = 0; i < split_index.first; i++) {
        left_vec.push_back(vec[i]);
    }
    
    for (int i = split_index.second; i < vec.size(); i++) {
        right_vec.push_back(vec[i]);
    }
    
    return make_pair(left_vec, right_vec);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
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