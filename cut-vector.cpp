#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for(int i = 1; i <= vec.size(); i++) {
        if(i == vec.size() || vec[i-1] != vec[i]) {
            int left_sum = 0;
            int right_sum = 0;
            
            for(int j = 0; j < i; j++) {
                left_sum += vec[j];
            }
            
            for(int j = i; j < vec.size(); j++) {
                right_sum += vec[j];
            }
            
            int diff = abs(left_sum - right_sum);
            if(diff < min_diff) {
                min_diff = diff;
                cut_index = i;
            }
        }
    }
    
    vector<int> left_vec(vec.begin(), vec.begin() + cut_index);
    vector<int> right_vec(vec.begin() + cut_index, vec.end());
    
    return make_pair(left_vec, right_vec);
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    
    cout << "Left Vector: ";
    for(auto x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    
    cout << "Right Vector: ";
    for(auto x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}