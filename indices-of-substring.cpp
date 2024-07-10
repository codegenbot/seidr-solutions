#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int lastPos = -1; // The index of the last occurrence of the target in the text.

    while ((lastPos = text.find(target, lastPos + 1)) != string::npos) {
        result.push_back(lastPos);
        lastPos++;
    }

    return result;
}