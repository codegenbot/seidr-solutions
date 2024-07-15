#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 48;
    int b = 18;
    cout << "GCD: " << gcd(a, b) << endl;
    
    int num1 =stoi(cin >> a);
    int num2 = stoi(cin >> b);
    
    cout << "Indices at which the target appears in the text: ";
    for(int i =0; i < num1.size();i++){
        if(num1.substr(i,2) == num2){
            cout << i << " ";
        }
    }cout<<endl;
    return 0;
}