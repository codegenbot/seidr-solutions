#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    getline(cin, target);
    
    vector<int> indices; 
    int start = 0;
    while (start < text.length()) {
        size_t pos = text.find(target, start);
        if (pos == string::npos)
            break;
        indices.push_back(pos);
        start = pos + 1;
    }
    
    if (!indices.empty()) {
        cout << "Enter the indices: ";
        int num1, num2;
        cin >> num1 >> num2;
        cout << "GCD of indices: " << gcd(num1, num2) << endl;
    } else {
        cout << "No matching index found." << endl;
    }
    
    return 0;
}