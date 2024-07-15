#include <vector>
#include <string>
using namespace std;

int main() {
    string text = "example";
    string target = "ple";
    vector<int> res = indicesOfSubstring(text, target);
    // Do something with res
    return 0;
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> res;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        res.push_back(pos);
        pos += target.size();
    }
    return res;
}