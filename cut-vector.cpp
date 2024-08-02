#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i <= vec.size(); i++) {
        int left_sum = 0, right_sum = 0;
        
        if (i < vec.size()) {
            for (int j = 0; j < i; j++) {
                left_sum += vec[j];
            }
            for (int j = i; j < vec.size(); j++) {
                right_sum += vec[j];
            }
        } else {
            left_sum = accumulate(vec.begin(), vec.end(), 0);
            right_sum = 0;
        }
        
        int diff = abs(left_sum - right_sum);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left_vec(cut_index), right_vec(vec.size() - cut_index);
    
    for (int i = 0; i < cut_index; i++) {
        left_vec.push_back(vec[i]);
    }
    for (int i = cut_index; i < vec.size(); i++) {
        right_vec.push_back(vec[i]);
    }
    
    return {left_vec, right_vec};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    
    cout << "1 ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "0 ";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}