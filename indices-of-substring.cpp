#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        bool found = true;
        for (int j = 0; j < target.size(); j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    // Read input
    string text, target;
    cin >> text >> target;

    // Process the input
    vector<int> result = indicesOfSubstring(text, target);

    // Print the output
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}