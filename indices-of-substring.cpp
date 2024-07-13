```c++
#include <vector>
#include <string>

using namespace std;

int main() {
    using namespace std;

    string text = "Hello World";  // input text
    string target = "o";  // input target

    vector<int> result = indicesOfSubstring(text, target);

    for (int i : result) {
        cout << i << endl;
    }

    return 0;
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}