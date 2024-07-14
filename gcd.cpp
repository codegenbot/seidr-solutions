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
    
    int start = 0;
    while (start < text.length()) {
        size_t pos = text.find(target, start);
        if (pos == string::npos)
            break;
        start = pos + 1;
    }
    
    if (start >= text.length())
        cout << "No matching index found." << endl;
    else
        cout << "GCD of indices: " << gcd(start, start) << endl; 
    return 0;
}