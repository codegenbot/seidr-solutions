```cpp
#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target)
            result.push_back(i);
    }

    return result;
}

int main() {
    string text;
    cout << "Enter the text: ";
    cin >> text;

    vector<int> indices = indicesOfSubstring(text, text);

    for (int i : indices)
        cout << i << " ";

    return 0;
}