#include <iostream>

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    
    vector<int> result = findSubstringIndices(text, target);
    for (int index : result) {
        cout << index << " ";
    }
    return 0;
}