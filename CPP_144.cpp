#include <string>
#include <iostream>

using namespace std;

bool simplify(string x, string n) {
    int a = stoi(strtok((x).c_str(), "/"));
    int b = stoi(strtok(NULL, "/"));
    int c = stoi(strtok((n).c_str(), "/"));
    int d = stoi(strtok(NULL, "/"));

    long long result = (long long)a*d + (long long)b*c;
    long long commonDivisor = gcd(abs(result), abs(a*d));

    return a*d / commonDivisor == b*c / commonDivisor;
}

long long gcd(long long a, long long b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}