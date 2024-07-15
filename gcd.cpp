#include <vector>
#include <string>

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
    string text, target;
    cout << "Enter the text: ";
    cin >> text;
    cout << "Enter the target substring: ";
    cin >> target;

    vector<int> indices = indicesOfSubstring(text, target);

    if (indices.size() == 0) {
        cout << "Target not found in the text." << endl;
    } else {
        cout << "Indices at which the target appears in the text are: ";
        for (int i : indices) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}