```
#include<iostream>
using namespace std;

long long special_factorial(int n){
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        long long fact = 1;
        for (int j = 1; j <= i; ++j) {
            fact *= j;
        }
        result *= fact;
    }
    return result;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    assert(special_factorial(n)>0);
    return 0;
}