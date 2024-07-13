#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        size_t pos = text.find(target, i);
        if(pos != string::npos)
            result.push_back(i + (pos == 0 ? 0 : 1));
    }

    return result;
}