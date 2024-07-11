#include <bits/stdc++.h>
using namespace std;

bool right_angle_triangle(float a, float b, float c) {
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        return true;
    else
        return false;
}

int main() {
    float side1,side2,side3;
    cout<<"Enter sides of triangle (in cm):"<<endl;
    cin>>side1>>side2>>side3;
    if(side1+side2>side3 && right_angle_triangle(side1,side2,side3)) 
        cout<< "The given sides form a right-angled triangle." << endl;  
    else
        cout << "The given sides do not form a right-angled triangle." << endl;