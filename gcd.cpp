```
#include <string>
#include <iostream>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int length = target.length();
    for (int i = 0; i <= text.length() - length; i++) {
        bool match = true;
        for (int j = 0; j < length; j++) {
            if (text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            indices.push_back(i);
        }
    }
    return indices;
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
    vector<int> result = findIndices(text, target);
    for (int i : result)
        cout << i << " ";
    return 0;
}