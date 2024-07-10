#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int textSize = text.length();
    int targetSize = target.length();

    for(int i = 0; i <= textSize - targetSize; i++) {
        bool found = true;
        for(int j = 0; j < targetSize; j++) {
            if(text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text, target;
    cin >> text >> target;

    vector<int> result = indicesOfSubstring(text, target);

    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}