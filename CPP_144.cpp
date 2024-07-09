Here is the completed code:

```cpp
#include<string>
using namespace std;

bool simplify(string x, string n) {
    long long int num1 = 0, denom1 = 0, num2 = 0, denom2 = 0;
    int numeratorPos = x.find("/");
    int denominatorPos = x.find("/");
    num1 = stol(x.substr(0, numeratorPos));
    denom1 = stol(x.substr(numeratorPos + 1, denominatorPos - numeratorPos - 1));
    num2 = stol(n.substr(0, n.find("/")));
    denom2 = stol(n.substr(n.find("/") + 1));

    long long int commonDivisor = gcd(abs(num1 * denom2), abs(denom1 * num2));
    
    return (abs(num1 * denom2) / commonDivisor == abs(num2 * denom1)) && (commonDivisor != 0);

}

long long int gcd(long long int a, long long int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}