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
    string text = "Hello World";
    string target = "lo";

    vector<int> indices = indicesOfSubstring(text, target);

    cout << "Indices of substring: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    long long a = 375737;
    long long b = 559168;

    long long gcdValue = gcd(a, b);
    cout << "GCD: " << gcdValue << endl;  // prints GCD of the given numbers

    return 0;
}