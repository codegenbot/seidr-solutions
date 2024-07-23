#include <iostream>
#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target substring: ";
    getline(cin, target);

    vector<int> indices;
    size_t pos = 0;

    while((pos = text.find(target)) != string::npos) {
        indices.push_back(pos);
        text.erase(pos, target.length());
    }

    cout << "Indices of Substring (" << target << ") in the text: ";
    for(int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
    return 0;
}