#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for(int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[0]);
        if(diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left_vec = {vec[0]};
    vector<int> right_vec = vec;
    for(int i = 1; i < cut_index; i++) {
        left_vec.push_back(vec[i]);
    }
    for(int i = cut_index; i < vec.size(); i++) {
        right_vec.pop_back();
    }
    
    return {left_vec, right_vec};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto &x : vec) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "[";
    for(int i = 0; i < result.first.size(); i++) {
        cout << result.first[i];
        if(i < result.first.size() - 1) {
            cout << " ";
        }
    }
    cout << "] [";
    for(int i = 0; i < result.second.size(); i++) {
        cout << result.second[i];
        if(i < result.second.size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;
    
    return 0;
}