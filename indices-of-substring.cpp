```cpp
#include <string>
#include <iostream>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int n = text.length();
    int m = target.length();

    for(int i = 0; i <= n - m; i++) {
        bool match = true;
        for(int j = 0; j < m; j++) {
            if(text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if(match) indices.push_back(i);
    }

    return indices;
}

int main() {
    int n;
    cin >> n;
    string text;
    cin >> text;

    vector<int> result = findIndices(text, to_string(n));
    for(int i: result) cout << i << " ";
    return 0;
}