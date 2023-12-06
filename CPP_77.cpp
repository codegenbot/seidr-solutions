#include<stdio.h>
#include<math.h>
using namespace std;
bool iscuber(int a){
    int x = 0;
    while (x * x * x < a) {
        x++;
    }
    return x * x * x == a;
}