#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int textSize = text.size();
    int targetSize = target.size();

    for (int i = 0; i <= textSize - targetSize; i++) {
        bool isMatch = true;
        for (int j = 0; j < targetSize; j++) {
            if (text[i + j] != target[j]) {
                isMatch = false;
                break;
            }
        }
        if (isMatch) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    int textSize;
    cin >> textSize;

    string text;
    text.resize(textSize);
    for (int i = 0; i < textSize; i++) {
        cin >> text[i];
    }

    int targetSize;
    cin >> targetSize;

    string target;
    target.resize(targetSize);
    for (int i = 0; i < targetSize; i++) {
        cin >> target[i];
    }

    vector<int> result = indicesOfSubstring(text, target);

    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}