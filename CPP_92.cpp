#include<stdio.h>
#include<math.h>
using namespace std;

bool any_int(float a, float b, float c) {
    if (floor(a) == a && floor(b) == b && floor(c) == c) {
        int intA = (int)a, intB = (int)b, intC = (int)c;
        return (intA == intB + intC) || (intB == intA + intC) || (intC == intA + intB);
    }
    return false;
}