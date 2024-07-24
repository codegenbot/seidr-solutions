#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; ++i) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    // Read the input from the user
    string text;
    int numTargets;
    cin >> text >> numTargets;

    // Read the targets and store them in a vector of strings
    vector<string> targets(numTargets);
    for (int i = 0; i < numTargets; ++i) {
        cin >> targets[i];
    }

    // Process each target
    for (const auto& target : targets) {
        // Find the indices of the current target in the text
        vector<int> indices = indicesOfSubstring(text, target);

        // Print the indices
        cout << indices.size();
        for (int i : indices) {
            cout << " " << i;
        }
        cout << endl;
    }

    return 0;
}