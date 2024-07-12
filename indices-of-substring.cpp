#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i = 0; i <= n - m; i++) {
        if(text.substr(i, m) == target) {
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

    vector<int> indices = indicesOfSubstring(text, text);

    // Print output
    cout << "[";
    for(int i = 0; i < indices.size(); i++) {
        cout << indices[i];
        if(i < indices.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}