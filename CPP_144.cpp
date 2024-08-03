#include <algorithm>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

bool simplify(string x, string n) {
    int num1 = stoi(x.substr(0, x.find('/')));
    int den1 = stoi(x.substr(x.find('/') + 1));
    int num2 = stoi(n.substr(0, n.find('/')));
    int den2 = stoi(n.substr(n.find('/') + 1));

    int result_num = num1 * num2;
    int result_den = den1 * den2;

    int gcd = __gcd(result_num, result_den);

    return result_num % gcd == 0 && result_den % gcd == 0;
}  