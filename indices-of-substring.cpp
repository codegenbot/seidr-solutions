#include <vector>
#include <iostream>

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
    int numTargets;

    cin >> text >> numTargets;

    vector<int> result;

    for (int i = 0; i < numTargets; i++) {
        string target;
        cin >> target;
        result.insert(result.end(), indicesOfSubstring(text, target).begin(), indicesOfSubstring(text, target).end());
    }

    cout << "[";

    for (int i = 0; i < result.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << result[i];
    }
    cout << "]";

    return 0;
}