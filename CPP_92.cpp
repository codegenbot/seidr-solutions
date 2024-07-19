#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

bool any_int(float a, float b, float c) {
    return (a == (int)a) && (b == (int)b) && (c == (int)c);
}

int originalMain() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if(any_int(a, b, c))
        cout << "The numbers are integers: " << to_string(a) << ", " << to_string(b) << ", " << to_string(c) << "\n";
    else
        cout << "The numbers are not integers: " << to_string(a) << ".0, " << to_string(b) << ".0, " << to_string(c) << ".0\n";
    return 0;
}

int main() {
    originalMain();
    return 0;
}