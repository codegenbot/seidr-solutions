#include <stdio.h>
/*
Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin.
For example,
input:
1
2
output:
0.0
input:
2
1
output:
0.5
input:
99
100
output:
0.49
input:
100
99
output:
0.5
input:
1
100
output:
0.0
*/
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("0.0\n");
        return 0;
    }
    if(a==b){
        printf("0.50\n");
        return 0;
    }
    double a=1.0;
    for(int i=1;i<=b;i++){
        a*=((a-i+0.0)/a);
    }
    printf("%.2f\n",a);
    return 0;
}
