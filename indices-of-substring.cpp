#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.find(target) != string::npos)
            result.push_back(i);
        else
            i = n - m + 1;
    }

    return result;
}