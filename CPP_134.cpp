```c++
#include<iostream>
using namespace std;

int calculate(int x, int y) {
    if(x>y)
        return x-y;
    else
        return y-x;
}

int main() {
    int x,y;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;
    cout<<"The difference is: "<<calculate(x,y);
    return 0;
}