#include <vector>
#include <iostream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    int i = 0;
    while (i <= n - m) {
        if (text.substr(i, m) == target)
            result.push_back(i);
        i += 1; // increment `i` by 1 for the next match
    }

    return result;
}

int main() {
    string text;
    string target;
    cin >> text >> target;
    vector<int> res = indicesOfSubstring(text, target);
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}