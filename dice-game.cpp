#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
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
    int n, m, peter;
    
    scanf("%d %d", &n, &m);
    
    if(n > m) {
        printf("1.0\n");
        return 0;
    }
    if(m > 100) {
        m = 100;
    }
    
    if(peter <= m) {
        printf("0.0\n");
        return 0;
    }
    
    double sum = 0.0;
    double total = 0.0;
    
    for(peter = m + 1; peter <= n; peter++) {
        for(double x = 1; x <= peter; x++) {
            
            sum = x;
            
            for(double i = peter + m + 1; i <= n + m; i++) {
                sum *= i;
            }
            for(double i = 2; i <= (peter - 1); i++) {
                sum /= i;
            }
            for(double i = 2; i <= (m - 1); i++) {
                sum /= i;
            }
            
            total += sum;
            sum = 0.0;
        }
    }
    
    printf("%.6f\n", total);
    
}
