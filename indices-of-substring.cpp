#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int textSize = text.length();
    int targetSize = target.length();

    for (int i = 0; i <= textSize - targetSize; i++) {
        bool match = true;
        for (int j = 0; j < targetSize; j++) {
            if (text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            result.push_back(i);
        }
    }

    return result;
}