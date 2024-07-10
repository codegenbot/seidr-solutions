#include <iostream>
using namespace std;

long long special_factorial(int n){
    long long result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
        for(int j = 2; j <= i; j++){
            result *= j;
        }
    }
    return result;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Brazilian Factorial of " << n << " is: " << special_factorial(n) << endl;
    return 0;
}