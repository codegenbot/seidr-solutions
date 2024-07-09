#include <iostream>
#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int choice;
    cin >> choice;
    if (choice == 1) {
        int a, b;
        cin >> a >> b;
        cout << gcd(a, b) << endl;
    } else if (choice == 2) {
        string text, target;
        cin >> text >> target;
        vector<int> result = findIndicesOfSubstring(text, target);
        for (int index : result) {
            cout << index << " ";
        }
        cout << endl;
    }

    return 0;
}