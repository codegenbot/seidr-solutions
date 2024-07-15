#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> res;
    size_t pos = 0;
    while (pos < text.length()) {
        size_t targetPos = text.find(target, pos);
        if (targetPos == string::npos) break;
        res.push_back(targetPos);
        pos = targetPos + 1; 
    }
    return res;
}

int main() {
    string text = "Hello World";
    string target = "World";
    vector<int> res = indicesOfSubstring(text, target);
    // Now 'res' contains the indices of substring "World" in the given text.
}