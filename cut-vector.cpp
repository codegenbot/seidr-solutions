```
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    vector<vector<int>> res(2);
    int minDiff = INT_MAX;
    int index = -1;
    
    for(int i = 0; i < v.size(); i++) {
        if(i == 0 || i == v.size()-1)
            continue;
        int diff1 = abs(v[0] - v[i]);
        int diff2 = abs(v[v.size()-1] - v[i]);
        
        if(diff1 <= diff2 && diff1 < minDiff) {
            minDiff = diff1;
            index = i;
        }
        else if(diff2 < minDiff) {
            minDiff = diff2;
            index = v.size() - 1 - i;
        }
    }
    
    res[0].clear();
    for(int i = 0; i <= index; i++)
        res[0].push_back(v[i]);
        
    res[1].clear();
    for(int i = index + 1; i < v.size(); i++)
        res[1].push_back(v[i]);
        
    return res;
}

int main() {
    vector<int> v = {1,2,3,4};
    vector<vector<int>> result = cutVector(v);
    
    for(auto &vec : result) {
        for(int num : vec)
            cout << num << " ";
        cout << endl;
    }
}