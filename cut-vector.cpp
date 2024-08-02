#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    
    if (n == 1) {
        result.push_back({vec[0]});
        result.push_back({});
    } else {
        for (int i = 1; i < n - 1; i++) {
            int leftSum = 0, rightSum = 0;
            for (int j = 0; j < i; j++)
                leftSum += vec[j];
            for (int j = i; j < n; j++)
                rightSum += vec[j];
            
            if (leftSum == rightSum) {
                result.push_back({vec[0]});
                result.push_back(vec.substr(1));
                break;
            } else if (abs(leftSum - rightSum) <= abs((n-1)*vec[0] - leftSum)) {
                result.push_back(vec.substr(0, i));
                result.push_back(vec.substr(i));
                break;
            }
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
    vector<vector<int>> res = cutVector(vec);
    for (auto v : res)
        for (auto x : v)
            cout << x << " ";
    cout << endl;
    
    return 0;
}