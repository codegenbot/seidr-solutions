#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.length() - target.length(); i++) {
        int j = 0;
        while (j < target.length()) {
            if (text[i + j] != target[j]) {
                break;
            }
            j++;
        }
        if (j == target.length()) {
            result.push_back(i);
        }
    }
    return result;
}