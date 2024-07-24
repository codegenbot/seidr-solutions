#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    cin >> text;
    cout << "Enter the target substring: ";
    cin >> target;

    vector<int> result = indicesOfSubstring(text, target);
    cout << "Indices of substring at which it appears: ";
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}

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