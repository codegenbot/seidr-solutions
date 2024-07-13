#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        int j = 0;
        while (j < target.size()) {
            if (text[i + j] != target[j]) break;
            j++;
        }
        if (j == target.size()) result.push_back(i);
    }
    return result;
}

int main() {
    // Sample usage
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target string: ";
    getline(cin, target);
    vector<int> indices = indicesOfSubstring(text, target);
    for (int index : indices) {
        cout << index << " ";
    }
    return 0;
}