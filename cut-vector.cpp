```cpp
#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int cut_idx = -1;
    
    for (int i = 0; i < n; i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j <= i; j++)
            left_sum += v[j];
        for (int j = i + 1; j < n; j++)
            right_sum += v[j];
        
        if (left_sum == right_sum) {
            return {{v[0], v[0]}, vector<int>(v.begin() + 1, v.end())};
        } else if (abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            cut_idx = i;
        }
    }
    
    int left_sum = 0;
    
    for (int i = 0; i < n; i++)
        left_sum += v[i];
    
    return {{v[0], left_sum}, vector<int>()};
}

int main() {
    // Example inputs
    vector<int> v1({1});
    pair<vector<int>, vector<int>> res1 = cutVector(v1);
    cout << "Input: ";
    for (int x : v1) cout << x << " ";
    cout << std::endl;
    cout << "Output:" << std::endl;
    cout << "Left: ";
    for (int x : res1.first) cout << x << " ";
    cout << std::endl;
    cout << "Right: ";
    for (int x : res1.second) cout << x << " ";
    cout << std::endl << std::endl;

    vector<int> v2({1, 10});
    pair<vector<int>, vector<int>> res2 = cutVector(v2);
    cout << "Input: ";
    for (int x : v2) cout << x << " ";
    cout << std::endl;
    cout << "Output:" << std::endl;
    cout << "Left: ";
    for (int x : res2.first) cout << x << " ";
    cout << std::endl;
    cout << "Right: ";
    for (int x : res2.second) cout << x << " ";
    cout << std::endl << std::endl;

    // Add more inputs as needed
    return 0;
}