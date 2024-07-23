```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    
    vector<int> left;
    vector<int> right;
    int total_sum = 0; 

    for (int i = 0; i < n; i++) 
        total_sum += v[i];
    
    int left_sum = 0, right_sum = total_sum;

    if (v[0] > v[1]) {
        return {{v}, {}}; 
    }

    for (int i = 0; i < n; i++) {
        while (left_sum + v[i] <= right_sum && i + 1 < n) {
            left_sum += v[i];
            right_sum -= v[i];
            i++; 
        }
        
        if (left_sum == right_sum)
            break;
    }

    left = vector<int>(v.begin(), v.begin() + (i));
    right = vector<int>(v.begin() + i, v.end());
    
    return {{left}, {right}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    vector<vector<int>> res = cutVector(v);
    for (auto& vec : res) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}