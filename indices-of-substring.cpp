#include <vector>
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
    // Read input from user
    string text;
    int n;
    cin >> text >> n;

    // Call the function and print the output
    vector<int> indices = indicesOfSubstring(text, text.substr(0, n));
    for (int i : indices)
        cout << i << " ";
    return 0;
}