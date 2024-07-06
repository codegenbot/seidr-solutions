```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    vector<vector<int>> res = cutVector(vec);
    cout << "[";
    
    std::vector<std::string> output1;
    for (int i = 0; i < res[0].size(); i++) {
        output1.push_back(std::to_string(res[0][i]));
    }
    cout << "{";
    for (auto it = output1.begin(); it != output1.end(); ++it) {
        cout << *it << " ";
    }
    cout << "} [";
    
    std::vector<std::string> output2;
    for (int i = 0; i < res[1].size(); i++) {
        output2.push_back(std::to_string(res[1][i]));
    }
    cout << "{";
    for (auto it = output2.begin(); it != output2.end(); ++it) {
        cout << *it << " ";
    }
    cout << "]";

    return 0;
}

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n; i++) {
        if (i == 0 || vec[i] - vec[i-1] >= 0) {
            res[0].assign(vec.begin(), vec.begin() + i + 1);
            res[1].assign(vec.begin() + i, vec.end());
            break;
        }
    }
    return res;
}