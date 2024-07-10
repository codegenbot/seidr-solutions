#include <iostream>
#include <cassert>
using namespace std;

bool isValidTriangle(double a, double b, double c) {
    return (a + b > c && a + c > b && b + c > a);
}

int any_int(double a, double b, double c){
    return !isValidTriangle(a, b, c);
}

int main() {
    assert(any_int(3.01, 4, 7) == false);
}