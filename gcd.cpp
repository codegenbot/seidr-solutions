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

int main() {
    string text, target;
    cout << "Enter the text: ";
    cin >> text;
    cout << "Enter the target: ";
    cin >> target;

    vector<int> indices = indicesOfSubstring(text, target);
    int g = gcd(indices.size(), 1);

    cout << "Indices: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    cout << "GCD of indices: " << g << endl;

    return 0;
}