#include<stdio.h>
#include<math.h>
using namespace std;

bool any_int(float a, float b, float c) {
    if (floor(a) == a && floor(b) == b && floor(c) == c) {
        int intA = static_cast<int>(a);
        int intB = static_cast<int>(b);
        int intC = static_cast<int>(c);
        return (intA == intB + intC || intB == intA + intC || intC == intA + intB);
    }
    return false;
}