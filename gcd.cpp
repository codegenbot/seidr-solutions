#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while(b != 0)
        swap(a,b);
    return abs(a);
}