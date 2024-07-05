#include <vector>
#include <string>
#include <algorithm>
#include <initializer_list>
#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    cout << gcd(48, 18);  
    return 0;
}