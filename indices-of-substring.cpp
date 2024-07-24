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
    // Read input from user
    string text;
    int numTargets;
    cin >> text >> numTargets;

    // Solve the problem
    vector<int> indices = indicesOfSubstring(text, "");

    // Print output
    cout << endl;
    for (int i : indices) {
        cout << i << endl;
    }

    return 0;
}