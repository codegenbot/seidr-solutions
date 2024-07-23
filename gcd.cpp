```cpp
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
            i += m - 1; // skip overlapping matches
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
    string text = "Hello, World!";
    string target = "World";
    vector<int> indices = indicesOfSubstring(text, target);
    cout << "Indices: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}