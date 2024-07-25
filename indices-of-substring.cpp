#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for(int i = 0; i <= text.length() - target.length(); i++) {
        bool match = true;
        for(int j = 0; j < target.length(); j++) {
            if(text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if(match) {
            result.push_back(i);
        }
    }
    return result;
}