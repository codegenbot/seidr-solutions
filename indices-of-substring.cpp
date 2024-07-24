#include <vector>
#include <string>
using namespace std;

int main() {
    vector<int> result = indicesOfSubstring("Hello World", "World");
    for (auto i : result) {
        cout << i << endl;
    }
    return 0;
}

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