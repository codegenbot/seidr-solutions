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
            int leftSum = 0, rightSum = 0;
            for(int j = 0; j <= i; j++)
                leftSum += v[j];
            for(int j = i; j < n; j++)
                rightSum += v[j];
            
            if(abs(leftSum - rightSum) <= abs(v[0] - v[i])) {
                res[0].clear();
                for(int j = 0; j <= i; j++)
                    res[0].push_back(v[j]);
                break;
            }
            else {
                res[0].clear();
                for(int j = i; j < n; j++)
                    res[0].push_back(v[j]);
                break;
            }
        }
    }
    
    return res;
}

int main() {
    vector<int> input;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        cout << "Enter element " << (i+1) << ": ";
        cin >> num;
        input.push_back(num);
    }
    
    vector<vector<int>> result = cutVector(input);
    cout << "Left subvector: ";
    for(int i = 0; i < result[0].size(); i++)
        cout << result[0][i] << " ";
    cout << endl;
    cout << "Right subvector: ";
    for(int i = 0; i < result[1].size(); i++)
        cout << result[1][i] << " ";
    cout << endl;
    
    return 0;
}