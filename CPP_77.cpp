#include<stdio.h>
#include<math.h>
using namespace std;

bool iscuber(int a) {
    int root = round(cbrt(a));
    return root * root * root == a;
}