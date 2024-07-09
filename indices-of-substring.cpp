#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text;
    cin >> text >> ' ';
    string target;
    cin >> target >> ' ';

    vector<char> indices = indicesOfSubstring(text, target);

    for (char i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}