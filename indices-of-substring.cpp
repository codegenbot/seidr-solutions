```cpp
#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();

    for(int i = 0; i <= n - m; i++) {
        if(text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text = "your_text_here";
    string target = "your_target_here";
    vector<int> result = indicesOfSubstring(text, target);
    // Print or process the result as needed
    return 0;
}