#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int split_index = 0;
    
    for(int i=1; i<vec.size(); i++) {
        int diff = abs(vec[i-1] - vec[i]);
        if(diff < min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }
    
    vector<int> left_vec = vector<int>(vec.begin(), vec.begin() + split_index);
    vector<int> right_vec = vector<int>(vec.begin() + split_index, vec.end());
    
    return make_pair(left_vec, right_vec);
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "Left: ";
    for(auto num : result.first) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Right: ";
    for(auto num : result.second) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}