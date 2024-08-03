```cpp
#include<iostream>
using namespace std;

bool iscuber(int a){
    int c = (int)cbrt(a);
    return c*c*c == a;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if(iscuber(n))
        cout << n << " is a cube." << endl;
    else
        cout << n << " is not a cube." << endl;
    return 0;
}