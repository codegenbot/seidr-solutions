```cpp
#include <vector>
#include <string>
#include <initializer_list>
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
    string text, target;

    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the target string: ";
    getline(cin, target);

    vector<int> res = indicesOfSubstring(text, target);
    for (int i : res) {
        cout << i << " ";
    }
    
    return 0;
}