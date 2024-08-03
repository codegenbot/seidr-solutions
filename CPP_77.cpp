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
        cout << n << " is a perfect cube." << endl;
    else
        cout << n << " is not a perfect cube." << endl;
    return 0;
}