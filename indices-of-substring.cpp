#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int textLen = text.length();
    int targetLen = target.length();

    for (int i = 0; i <= textLen - targetLen; i++) {
        if (text.substr(i, targetLen) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    // Your code here
    return 0;
}