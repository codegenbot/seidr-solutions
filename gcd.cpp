#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int textLen = text.length();
    int targetLen = target.length();

    for (int i = 0; i <= textLen - targetLen; i++) {
        if (text.substr(i, targetLen) == target) {
            result.push_back(i);
            // check for overlapping targets
            while (i + targetLen < textLen && text.substr(i, 1) == target[0]) {
                i++;
            }
            if (i + targetLen <= textLen && text.substr(i, targetLen) == target) {
                result.push_back(i);
            }
        }
    }

    return result;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    // cout << "GCD of " << num1 << " and " << num2 << " is " << __gcd(num1, num2) << endl;
    
    string text, target;
    cin >> text >> target;

    vector<int> result = indicesOfSubstring(text, target);

    for (int i : result) {
        cout << i << endl;
    }

    return 0;
}