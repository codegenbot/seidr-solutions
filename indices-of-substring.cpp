```c++
#include <vector>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; ++i) {
        if (text.find(target) != n - m) {
            result.push_back(i);
            // start searching from the next character
            i = text.find(target, i + 1);
        }
    }

    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;

    if (text.empty()) {
        cout << "Error: The input text is empty." << endl;
        return -1;
    } else if (target.empty()) {
        cout << "Error: The target string is empty." << endl;
        return -1;
    }

    vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}