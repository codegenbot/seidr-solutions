```cpp
#include<iostream>
using namespace std;

bool iscuber(int a){
    int c = (int)cbrt(a);
    return c*c*c == a;
}

int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if(iscuber(n))
        cout << "Yes, the cube root of " << n << " is an integer." << endl;
    else
        cout << "No, the cube root of " << n << " is not an integer." << endl;
    return 0;
}