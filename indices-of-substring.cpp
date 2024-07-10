```cpp
#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        bool found = true;
        for (int j = 0; j < m; j++) {
            if (i + j >= n || text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
            i += m; // Start searching from the next character
        } else {
            i++; // Start searching from the next character
        }
    }

    return result;
}

int main() {
    string text = "your_text_here";
    string target = "your_target_here";
    vector<int> result = indicesOfSubstring(text, target);
    return 0;
}