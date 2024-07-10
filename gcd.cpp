#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int targetLength = target.length();
    for(int i = 0; i <= text.length() - targetLength; i++) {
        if(text.substr(i, targetLength) == target) {
            result.push_back(i);
            // Check for overlap
            while(i + targetLength < text.length() && text.substr(i, targetLength) == target) {
                i++;
                targetLength = target.length();
            }
        }
    }
    return result;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << gcd(num1, num2);

    string text, target;
    cin >> text >> target;
    vector<int> result = indicesOfSubstring(text, target);
    for(int i : result)
        cout << " " << i;
    return 0;
}