#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<int> left, right;
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || v[i] <= v[i-1]) {
            left.push_back(v[i]);
        } else {
            break;
        }
    }
    
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1 || v[i] >= v[i+1]) {
            right.push_back(v[i]);
        } else {
            break;
        }
    }
    
    return {left, right};
}

int main() {
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "Left subvector: ";
    for (int x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right subvector: ";
    for (int x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}