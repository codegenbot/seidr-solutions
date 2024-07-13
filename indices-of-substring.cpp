#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLen = target.length();
    for (int i = 0; i <= text.length() - targetLen; i++) {
        bool match = true;
        for (int j = 0; j < targetLen; j++) {
            if (text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) indices.push_back(i);
    }
    return indices;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    for (int i : result) cout << i << " ";
    return 0;
}