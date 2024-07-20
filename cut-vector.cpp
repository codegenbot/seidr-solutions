#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int pos = 0;
    for(int i = 1; i <= v.size(); i++) {
        if(abs((v[0] - v[i-1]) / (i-1)) < minDiff) {
            minDiff = abs((v[0] - v[i-1]) / (i-1));
            pos = i;
        }
    }
    
    vector<vector<int>> result(2);
    for(int i = 0; i < pos; i++) {
        result[0].push_back(v[i]);
    }
    if(pos < v.size()) {
        result[0].push_back(v[pos]);
        for(int i = pos+1; i < v.size(); i++) {
            result[1].push_back(v[i]);
        }
    } else {
        result[0] = v;
    }
    
    return result;
}