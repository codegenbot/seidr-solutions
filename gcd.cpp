#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
            while (i + m < n && text.substr(i, m) == target) {
                i++;
                result.push_back(i);
            }
        }
    }

    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;

    vector<int> result = indicesOfSubstring(text, target);

    for (int i : result)
        cout << i << " ";

    return 0;
}