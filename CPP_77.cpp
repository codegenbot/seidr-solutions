#include<stdio.h>
#include<math.h>
using namespace std;

bool iscuber(int a) {
    int cubeRoot = round(cbrt(a));
    return cubeRoot * cubeRoot * cubeRoot == a;
}