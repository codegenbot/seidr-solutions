#include<iostream>
using namespace std;

bool iscuber(int a){
    int c = (int)cbrt(a);
    return a == pow(c, 3);
}

int main(){
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    if(iscuber(num))
        cout << num << " is a cube.";
    else
        cout << num << " is not a cube.";

    return 0;
}