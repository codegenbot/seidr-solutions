Here is the solution:

```cpp
#include<string>
using namespace std;

bool simplify(string x, string n) {
    int num1 = 0, den1 = 0, num2 = 0, den2 = 0;
    int gcd = 1;

    // Convert strings to fractions
    int temp = 0;
    for (int i = 1; i < x.size(); i++) {
        if (x[i] == '/') {
            num1 = stoi(x.substr(0, i - 1));
            den1 = stoi(x.substr(i + 1));
            break;
        }
        temp *= 10;
        temp += x[i] - '0';
    }

    for (int i = 1; i < n.size(); i++) {
        if (n[i] == '/') {
            num2 = stoi(n.substr(0, i - 1));
            den2 = stoi(n.substr(i + 1));
            break;
        }
        temp *= 10;
        temp += n[i] - '0';
    }

    // Calculate the greatest common divisor
    int a = abs(num1 * den2 - num2 * den1);
    for (int i = 1; i <= a; i++) {
        if (a % i == 0 && gcd > i)
            gcd = i;
    }

    return num1 * den2 / gcd == num2 * den1 / gcd;
}