#include <iostream>
using namespace std;

bool any_int(float a, float b, float c) {
    return (a == b + c || a == b - c || a == c + b || a == c - b) && 
           (int(a) == a) && (int(b) == b) && (int(c) == c);
}

int main() {
    float a, b, c;
    cout << "Enter three floats: ";
    cin >> a >> b >> c;
    if(any_int(a, b, c))
        cout << "At least one of the numbers is an integer.\n";
    else
        cout << "None of the numbers are integers.\n";
    return 0;
}