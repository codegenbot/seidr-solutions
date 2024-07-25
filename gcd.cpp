#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; ; i++) {
        int j = 0;
        while (i + j < n && j < m && text[i + j] == target[j]) {
            if (j == m - 1) {
                result.push_back(i);
                i += j; // skip the matched characters to avoid duplicate matches
                j = 0; // reset j for the next match
            } else {
                j++;
            }
        }
    }

    return result;
}

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int x, y; 
    cin >> x >> y; 
    cout << gcd(x, y) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices)
        cout << i << " ";
    return 0;
}