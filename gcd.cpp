#include <iostream>
#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 71065;
    int b = 426691; 
    cout << "GCD: " << gcd(a, b) << endl;

    string text;
    cout << "Enter the text: ";
    getline(cin, text);

    string target;
    cout << "Enter the target: ";
    getline(cin, target);

    vector<int> result;
    int idx = text.find(target);
    while (idx != string::npos) {
        result.push_back(idx);
        idx = text.find(target, idx + 1);
    }

    cout << "Indices at which the target appears in the text: ";
    for (int i : result)
        cout << i << " ";
    cout << endl;

    return 0;
}