```cpp
#include <vector>
#include <string>
#include <initializer_list>
using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> res;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        if (pos < text.size() && text.substr(pos, target.size()) == target) { 
            res.push_back(pos);
            pos += target.size();
        } else {
            break; 
        }
    }
    return res;
}

int main() {
    string text = "Hello World";
    string target = "World";
    vector<int> res = indicesOfSubstring(text, target);
}