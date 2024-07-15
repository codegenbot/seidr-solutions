#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    for(int i = 0; i < n; i++) {
        if(i == 0 || i == n-1)
            res[0].push_back(v[i]);
        else {
            int firstSum = 0, secondSum = 0;
            for(int j = 0; j <= i; j++)
                firstSum += v[j];
            for(int j = i+1; j < n; j++)
                secondSum += v[j];
            
            if(abs(firstSum - secondSum) <= abs((n-1)*v[0] - (n-i-1)*v[i])) {
                res[0].clear();
                for(int j = 0; j <= i; j++)
                    res[0].push_back(v[j]);
                break;
            }
            else {
                res[0].clear();
                for(int j = i+1; j < n; j++)
                    res[0].push_back(v[j]);
                break;
            }
        }
    }
    
    if(res[0].size() != n) {
        res[1] = v;
        for(int i = 0; i < n-1; i++) {
            int firstSum = 0, secondSum = 0;
            for(int j = 0; j <= i; j++)
                firstSum += v[j];
            for(int j = i+1; j < n; j++)
                secondSum += v[j];
            
            if(abs(firstSum - secondSum) >= abs((n-1)*v[0] - (n-i-1)*v[i])) {
                res[1].clear();
                for(int j = 0; j <= i; j++)
                    res[1].push_back(v[j]);
                break;
            }
        }
    }
    
    return {res[0], res[1]};
}

int main() {
    vector<int> input = {1, 2, 3, 4, 5}; 
    auto result = cutVector(input);
    for(auto& v : result) {
        cout << "[";
        for(int i = 0; i < v.size(); i++) {
            cout << v[i];
            if(i < v.size() - 1)
                cout << ", ";
        }
        cout << "]"<< endl;
    }
}