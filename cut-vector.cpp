#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == 0) continue;
        
        int sumLeft = 0, sumRight = 0;
        
        for(int j = 0; j <= i; j++) {
            sumLeft += v[j];
        }
        
        for(int j = i + 1; j < v.size(); j++) {
            sumRight += v[j];
        }
        
        int diff = abs(sumLeft - sumRight);
        
        if(diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<vector<int>> result(2);
    
    for(int i = 0; i <= cutIndex; i++) {
        result[0].push_back(v[i]);
    }
    
    for(int i = cutIndex + 1; i < v.size(); i++) {
        result[1].push_back(v[i]);
    }
    
    return result;
}

int main() {
    // Example usage:
    vector<int> v = {1, 0};
    vector<vector<int>> result = cutVector(v);
    for(auto &sub : result) {
        for(int num : sub) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}