#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        bool found = true;
        for (int j = 0; j < target.size(); j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) indices.push_back(i);
    }
    return indices;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    getline(cin, target);
    vector<int> result = findIndices(text, target);
    for (int i : result) cout << i << " ";
    return 0;
}