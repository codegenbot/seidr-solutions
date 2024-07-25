```cpp
#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int lastFound = -1;
    for (int i = 0; i <= text.size() - target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(i);
            lastFound = i;
        }
    }
    return indices;
}

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> result = findIndices(str, str);
    for (auto i : result)
        cout << i << " ";
    return 0;
}