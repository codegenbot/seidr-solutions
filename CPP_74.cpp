#include <string>

bool issame(vector<string> a, vector<string> b) {
    int totalChars1 = 0, totalChars2 = 0;
    for (const string& str : a) {
        totalChars1 += str.size();
    }
    for (const string& str : b) {
        totalChars2 += str.size();
    }
    
    return totalChars1 == totalChars2;
}