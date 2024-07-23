#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for (int i = 0; i < vec.size() - 1; i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j <= i; j++)
            left_sum += vec[j];
        for (int j = i + 1; j < vec.size(); j++)
            right_sum += vec[j];
        
        if (left_sum == right_sum) {
            result.first = vector<int>(vec.begin(), vec.begin() + i + 1);
            result.second = vector<int>(vec.begin() + i, vec.end());
            return result;
        }
        
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            result.first = vector<int>(vec.begin(), vec.begin() + i + 1);
            result.second = vector<int>(vec.begin() + i, vec.end());
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
    
    pair<vector<int>, vector<int>> res = cutVector(vec);
    
    cout << "First part: ";
    for (int x : res.first)
        cout << x << " ";
    cout << endl;
    
    cout << "Second part: ";
    for (int x : res.second)
        cout << x << " ";
    cout << endl;
    
    return 0;
}