```cpp
#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        pos += target.size();
    }
    return result;
}

int main() {
    string text = "Hello World";
    string target = "World";
    vector<int> res = indicesOfSubstring(text, target);
}