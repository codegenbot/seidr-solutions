```cpp
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int index = 0;
    while (index <= text.length() - target.length()) {
        index = text.find(target, index);
        if (index == string::npos)
            break;
        result.push_back(index);
        index += 1; // start searching from the next character
    }
    return result;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int gcd = gcd(num1, num2);

    cout << gcd << endl;

    string text, target;
    cin >> text >> target;

    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}