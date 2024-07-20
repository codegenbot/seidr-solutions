#include <iostream>
using namespace std;

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    if ((ai == ai + bi + ci) || (bi == ai + bi + ci) || (ci == ai + bi + ci))
        return true;
    else
        return false;
}

int main() {
    float a, b, c;
    cout << "Enter three floating point numbers: ";
    cin >> a >> b >> c;
    
    if(any_int(a, b, c)) 
        cout << "One of the integers is equal to the sum of the other two." << endl;
    else
        cout << "No integer is equal to the sum of the other two." << endl;
    
    return 0;
}