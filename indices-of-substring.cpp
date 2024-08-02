#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int textSize = text.length();
    int targetSize = target.length();

    for(int i = 0; i <= textSize - targetSize; i++) {
        bool isTarget = true;
        for(int j = 0; j < targetSize; j++) {
            if(text[i + j] != target[j]) {
                isTarget = false;
                break;
            }
        }
        if(isTarget) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    int textSize;
    cin >> textSize;
    string text;
    cin >> text;

    vector<int> result = findIndices(text, text);

    for(int i : result) {
        cout << i << endl;
    }

    return 0;
}