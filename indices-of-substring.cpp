#include <vector>
#include <iostream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; ; i++) {
        int pos = text.find(target, i);
        if (pos == -1) break;

        result.push_back(pos);
        i = pos + m;
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