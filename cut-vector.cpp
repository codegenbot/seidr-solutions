#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_idx = -1;
    
    for (int i = 0; i < v.size() - 1; i++) {
        int sum_left = 0, sum_right = 0;
        
        for (int j = 0; j <= i; j++) {
            sum_left += v[j];
        }
        
        for (int k = i + 1; k < v.size(); k++) {
            sum_right += v[k];
        }
        
        int diff = abs(sum_left - sum_right);
        if (diff == 0) {
            return {{v[0]}, {v.begin() + 1, v.end()}};
        } else if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }
    
    int sum_left = 0, sum_right = 0;
    for (int i = 0; i < cut_idx; i++) {
        sum_left += v[i];
    }
    for (int k = cut_idx; k < v.size(); k++) {
        sum_right += v[k];
    }
    
    return {{}, {v.begin(), v.end()}};
}

int main() {
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }
    
    pair<vector<int>, vector<int>> output = cutVector(input);
    
    for (auto i : output.first) {
        cout << i << " ";
    }
    cout << endl;
    
    for (auto i : output.second) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}