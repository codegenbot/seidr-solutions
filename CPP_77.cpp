bool iscuber(int a){
    int c = (int)cbrt(a);
    return c*c*c == a;
}

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(iscuber(n))
        cout << "YES";
    else
        cout << "NO";
}