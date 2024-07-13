Here is the completed code:

#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& vec) {
    int min_diff = INT_MAX;
    int split_index = -1;
    
    for (int i = 0; i < vec.size() - 1; i++) {
        int diff = abs(vec[i] - vec[i+1]);
        
        if (diff <= min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].resize(split_index + 1);
    result[1].resize(vec.size() - split_index - 1);
    
    for (int i = 0; i <= split_index; i++) {
        result[0][i] = vec[i];
    }
    
    for (int i = 0; i < vec.size() - split_index - 1; i++) {
        result[1][i] = vec[split_index + 1 + i];
    }
    
    return result;
}

int main() {
    // Test the function
    vector<int> vec = {1, 0};
    vector<vector<int>> result = cutVector(vec);
    
    for (auto& v : result) {
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}