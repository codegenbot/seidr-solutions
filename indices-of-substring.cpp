#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> res;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        res.push_back(pos);
        pos += target.size();
    }
    return res;

}

int main() {
    string text = "Hello, world! Hello, C++!";
    string target = "Hello";
    vector<int> indices = indicesOfSubstring(text, target);

    for (int index : indices) {
        cout << index << " ";
    }
    return 0;
}