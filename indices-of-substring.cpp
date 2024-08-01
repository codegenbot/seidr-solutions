#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int i = 0;
    while (i <= text.size() - target.size()) {
        int j = 0;
        while (j < target.size() && text[i + j] == target[j]) {
            j++;
        }
        if (j == target.size()) {
            result.push_back(i);
            i += j;
        } else {
            i++;
        }
    }
    return result;
}