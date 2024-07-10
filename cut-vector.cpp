#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int min_diff = INT_MAX;
    int pos = -1;
    
    for (int i = 0; i < n; i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; j++)
            left_sum += vec[j];
        for (int j = i; j < n; j++)
            right_sum += vec[j];
        
        if (left_sum == right_sum) {
            return {{vec.begin(), vec.begin() + i}, {vec.begin() + i, vec.end()}};
        }
        
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            pos = i;
        }
    }
    
    vector<int> left, right;
    for (int i = 0; i < pos; i++)
        left.push_back(vec[i]);
    for (int i = pos; i < n; i++)
        right.push_back(vec[i]);
    
    return {{left}, {right}};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int &x : vec)
        cin >> x;
    vector<vector<int>> res = cutVector(vec);
    cout << "First subvector: ";
    for (int x : res[0])
        cout << x << " ";
    cout << endl;
    cout << "Second subvector: ";
    for (int x : res[1])
        cout << x << " ";
    cout << endl;
    
    return 0;
}