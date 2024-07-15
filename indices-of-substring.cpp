```cpp
#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> res;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        res.push_back(pos);
        pos += target.length(); 
    }
    return res;
}

int main() {
    string text = "ps8Bs8B";
    string target = "s8B";
    vector<int> res = indicesOfSubstring(text, target);
}