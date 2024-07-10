#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int split_index = 0;
    
    for(int i = 1; i <= vec.size(); i++) {
        int left_sum = 0;
        int right_sum = accumulate(vec.begin() + i, vec.end(), 0);
        
        if(abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            split_index = i;
        }
    }
    
    vector<int> left_vec(vec.begin(), vec.begin() + split_index);
    vector<int> right_vec(vec.begin() + split_index, vec.end());
    
    return {left_vec, right_vec};
}

int main() {
    int n; cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    
    cout << "{";
    for(int i = 0; i < result.first.size(); i++) {
        cout << result.first[i];
        if(i < result.first.size() - 1) {
            cout << " ";
        }
    }
    cout << "}, {";
    for(int i = 0; i < result.second.size(); i++) {
        cout << result.second[i];
        if(i < result.second.size() - 1) {
            cout << " ";
        }
    }
    cout << "0}" << endl;
    
    return 0;
}