#include <vector>
#include <string>
using namespace std;

// Function definitions
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

// Main function
int main() {
    string text = "Hello";
    string target = "lo";
    vector<int> indices = indicesOfSubstring(text, target);
    cout << "Indices: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    int a = 10;
    int b = 5;
    int result = gcd(a, b);
    cout << "GCD of " << a << " and " << b << ": " << result << endl;

    return 0;
}