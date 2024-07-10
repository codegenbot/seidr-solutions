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
    string text;
    cout << "Enter the text: ";
    getline(cin, text);
    
    string target;
    cout << "Enter the target substring: ";
    getline(cin, target);

    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        cout << i << endl;
    }
    return 0;
}