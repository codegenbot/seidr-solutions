#include <vector>
using namespace std;

vector<int> findPair(vector<vector<int>>& inputs) {
    int target = inputs[1][2];
    vector<int> result;
    
    for(int i=0; i<inputs[0]; i++) {
        for(int j=i+1; j<inputs[0]; j++) {
            if(abs(inputs[1][i] + inputs[1][j]) == target) {
                result.push_back(inputs[1][i]);
                result.push_back(inputs[1][j]);
                return result;
            }
        }
    }
    
    result.push_back(-1);
    result.push_back(-1);
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> inputs(3, vector<int>(n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<2; j++) {
            cin >> inputs[j][i];
        }
    }
    
    vector<int> result = findPair(inputs);
    for(auto val : result) {
        cout << val << endl;
    }
    
    return 0;
}