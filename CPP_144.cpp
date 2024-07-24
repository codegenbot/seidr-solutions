#include<string>
using namespace std;

bool simplify(string x, string n) {
    int numerator1 = 0, denominator1 = 0;
    int numerator2 = 0, denominator2 = 0;

    size_t pos = 0;
    pos = x.find('/');
    numerator1 = stoi(x.substr(0, pos));
    denominator1 = stoi(x.substr(pos + 1));

    pos = n.find('/');
    numerator2 = stoi(n.substr(0, pos));
    denominator2 = stoi(n.substr(pos + 1));

    int commonDivisor = min(denominator1, denominator2);
    while (commonDivisor > 0) {
        if (denominator1 % commonDivisor == 0 && denominator2 % commonDivisor == 0) {
            break;
        }
        commonDivisor--;
    }

    return (numerator1 * numerator2) / (denominator1 * denominator2) == 1;
}