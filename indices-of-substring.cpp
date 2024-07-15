#include <vector>
#include <string>
#include <initializer_list>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.length() - target.length(); i++) {
        bool found = true;
        int j = 0;
        while (j < target.length()) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
            j++;
        }
        if (found) {
            result.push_back(i);
        }
    }
    return result;
}