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
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int greatestCommonDivisor = gcd(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is " << greatestCommonDivisor << endl;

    string text, target;
    cout << "Enter a text: ";
    cin >> text;
    cout << "Enter a target: ";
    cin >> target;

    vector<int> indices = indicesOfSubstring(text, target);
    cout << "Indices of substring are: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}