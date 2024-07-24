#include<string>
using namespace std;

bool simplify(string x, string n) {
    int numerator1 = stoi(strtok((x.substr(1)).c_str(), "/"));
    int denominator1 = stoi(x.substr(0, 1));
    
    int numerator2 = stoi(strtok((n.substr(1)).c_str(), "/"));
    int denominator2 = stoi(n.substr(0, 1));

    if(denominator1 != denominator2) {
        return false;
    }

    long gcd = numerator1 / __gcd(numerator1, numerator2);
    numerator1 /= gcd;
    numerator2 /= gcd;

    if((long)numerator1 * (long)denominator2 == (long)numerator2 * (long)denominator1) {
        return true;
    } else {
        return false;
    }
}