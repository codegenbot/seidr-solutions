#include <iostream>
#include <string>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int lastFound = -1;
    for (int i = 0; i <= text.length() - target.length(); i++) {
        if (text.substr(i, target.length()) == target) {
            if (lastFound == -1) {
                lastFound = i;
            }
            result.push_back(lastFound + 1);
        }
    }
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text;
    getline(cin, text);
    string target;
    getline(cin, target);

    vector<int> indices = findIndices(text, target);
    for (int i : indices)
        cout << i << " ";
    return 0;
}