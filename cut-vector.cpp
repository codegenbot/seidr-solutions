#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    vector<vector<int>> result;
    int minDiff = INT_MAX;
    int index = -1;
    
    for (int i = 0; i < vec.size(); i++) {
        int sum1 = 0, sum2 = 0;
        
        for (int j = 0; j <= i; j++) {
            sum1 += vec[j];
        }
        
        for (int j = i + 1; j < vec.size(); j++) {
            sum2 += vec[j];
        }
        
        int diff = abs(sum1 - sum2);
        if (diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    
    vector<int> left(vec.begin(), vec.begin() + index + 1);
    vector<int> right(vec.begin() + index, vec.end());
    
    result.push_back(left);
    result.push_back(right);
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto& x : vec) {
        cin >> x;
    }
    
    vector<vector<int>> res = cutVector(vec);
    for (const auto& v : res) {
        cout << v[0];
        for (int i = 1; i < v.size(); i++) {
            cout << ' ' << v[i];
        }
        cout << endl;
    }
    
    return 0;
}