#include <vector>
#include <limits>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    pair<vector<int>, vector<int>> result;
    
    for (int i = 1; i < vec.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; ++j)
            left_sum += vec[j];
        
        for (int j = i; j < vec.size(); ++j)
            right_sum += vec[j];
        
        if (left_sum == right_sum) {
            return {{vec[0]}, vector<int>(vec.begin() + 1, vec.end())};
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff < numeric_limits<int>::max()) {
            result.first = vector<int>(vec.begin(), vec.begin() + i);
            result.second = vector<int>(vec.begin() + i, vec.end());
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n+1);
    for (int i = 0; i <= n; ++i)
        cin >> vec[i];
    
    pair<vector<int>, vector<int>> res = cutVector(vec);
    
    cout << "[";
    for (int num : res.first) {
        cout << num;
        if (&num != &res.first.back())
            cout << " ";
    }
    cout << "] [";

    for (int num : res.second) {
        cout << num;
        if (&num != &res.second.back())
            cout << " ";
    }
    
    cout << "]" << endl;
    
    return 0;
}