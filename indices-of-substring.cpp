#include <vector>
#include <iostream>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int textSize = text.length();
    int targetSize = target.length();

    for (int i = 0; i <= textSize - targetSize; i++) {
        bool isMatch = true;
        for (int j = 0; j < targetSize; j++) {
            if (text[i + j] != target[j]) {
                isMatch = false;
                break;
            }
        }
        if (isMatch) {
            indices.push_back(i);
        }
    }

    return indices;
}

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int textSize = text.length();
    int targetSize = target.length();

    for (int i = 0; i <= textSize - targetSize; i++) {
        bool isMatch = true;
        for (int j = 0; j < targetSize; j++) {
            if (text[i + j] != target[j]) {
                isMatch = false;
                break;
            }
        }
        if (isMatch) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    string text, target;
    int n;
    cin >> text >> n;
    getline(cin, target);

    vector<int> result = findIndices(text, target);

    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;