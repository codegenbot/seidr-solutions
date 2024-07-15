```cpp
#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int targetLength = target.length();
    for (int i = 0; i <= text.length() - targetLength; i++) {
        bool found = true;
        for (int j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
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
    int num1, num2;
    cin >> num1 >> num2;
    cout << gcd(num1, num2) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices)
        cout << i << " ";
    return 0;
}