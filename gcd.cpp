#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 10;
    int b = 20;

    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;

    string text = "Hello World";
    string target = "World";
    vector<int> result = indicesOfSubstring(text, target);

    for (int i : result) {
        cout << i << endl;
    }

    return 0;
}