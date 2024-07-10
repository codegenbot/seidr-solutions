#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int n = text.size();
    int m = target.size();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            indices.push_back(i);
            // Check for overlapping occurrences
            while (i + m < n && text.substr(i, m) == target) {
                i++;
                indices.push_back(i);
            }
        }
    }

    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}