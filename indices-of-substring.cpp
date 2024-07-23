#include <vector>

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();

    for (int i = 0; ; i++) {
        int j = 0;
        while (i + j <= n && j < m && text[i + j] == target[j]) {
            if (j == m - 1) {
                result.push_back(i);
                j = m; // terminate the pattern search
            }
            else j++;
        }
        i += j;
    }

    return result;
}