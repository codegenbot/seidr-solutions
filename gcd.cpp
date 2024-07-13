#include <vector>
#include <iostream>
#include <string>

using namespace std;

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
    int num1, num2, textLength, targetLength;
    
    cin >> num1 >> num2 >> textLength >> targetLength;

    string text(textLength, ' '), target(targetLength, ' ');
    for(int i = 0; i < textLength; ++i) cin >> text[i];
    for(int i = 0; i < targetLength; ++i) cin >> target[i];

    // Calculate GCD of two numbers
    int gcd = __gcd(num1, num2);

    cout << gcd << endl;

    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}