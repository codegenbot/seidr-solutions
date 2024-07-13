#include <vector>
using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    int j = 0; // index for target
    for (int i = 0; i <= text.size() - target.size(); i++) { // index for text
        while (j < target.size() && i + j < text.size() && text[i + j] == target[j]) {
            j++;
        }
        if (j == target.size()) {
            result.push_back(i);
            j = 0; // reset the index for target
        } else {
            j = 0; // reset the index for target
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    string text, target;
    cin >> text >> target;
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}