#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<int> input;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int val;
        cout << "Enter element " << i + 1 << ": ";
        cin >> val;
        input.push_back(val);
    }
    
    vector<vector<int>> result = cutVector(input);
    
    for(int i = 0; i < 2; i++) {
        cout << "Subvector " << i + 1 << ":";
        for(auto num : result[i])
            cout << " " << num;
        cout << endl;
    }
    
    return 0;
}

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    int minDiff = INT_MAX;
    int pos = -1;
    
    for(int i = 0; i < n; i++) {
        if(i == 0 || i == n-1)
            res[0].push_back(v[i]);
        else {
            int diff = abs(v[0] - v[i]);
            if(diff <= minDiff) {
                minDiff = diff;
                pos = i;
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(i == 0 || i == n-1)
            res[1].push_back(v[i]);
        else if(i != pos) 
            res[1].push_back(v[i]);
    }
    
    return res;
}