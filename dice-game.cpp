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
  int n, m;
  while(cin >> n >> m)
  {
    long double res = 0.0;
    long double peter = n, colin = m;
    for(int i = max(n, m); i <= n+m-1; i++)
    {
      if(i == n+m-1)
      {
        int total = i-1;
        for(; total >= i-max(n, m); total--)
        {
          res += peter/(double)i*colin/(double)total*(1-res);
        }
        int remain = i-max(n, m)-1;
        int higher = n+m-1-max(n, m)-2;
        res += peter/(double)i*((1-res)*(1-(colin-1)/(double)total));
        for(int j = total; j > i-max(n, m); j--)
        {
          res += peter/(double)i*(1-res)*colin/(double)total*(double(higher)/double(n+m-1));
          higher--;
        }
      }
      else
      {
        int total = i-1;
        for(; total >= i-max(n, m); total--)
        {
          res += peter/(double)i*colin/(double)total*(1-res);
        }
        res += peter/(double)i*((1-res)*(1-(colin-1)/(double)total));
      }
    }
    if(n+m == 0)
      res = 0.0;
    if(n == 0 && m != 0 || n != 0 && m == 0)
      res = 1.0;
    printf("%.2f\n", double(res*100));
  }
}
