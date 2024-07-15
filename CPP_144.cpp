#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int numerator1 = 0, denominator1 = 0;
    int numerator2 = 0, denominator2 = 0;

    stringstream ss(x);
    ss >> numerator1 >> denominator1;

    stringstream sn(n);
    sn >> numerator2 >> denominator2;

    return (double)numerator1 / denominator1 == (double)numerator2 / denominator2;
}