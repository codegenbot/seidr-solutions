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
要求解：
设实验E(n,m)为n,m两项球个数的实验，其中满足n项球>m项球。
首先事件F(n,m)={(1,1),(2,1),(3,1),...,(n,1)}
其次事件E(n,m)={(n-1,1),(n,2),(n,3),...(n,m-1)}

问：P(E(n,m))=?
集合问题一般用全概率公式。直接应用(!)p(n,0)=1-p(0,n)。
证明全概率公式基本式：
p(1,1) = p(e)/(p(e)+p(F)) = 1/(1+1/m)
令S=e>F,且F=(f1,f2,f3...)，考虑是否考虑事件e是否包括在F内。
当不包含 S = F∪{e},全概率公式p(S) = p(1,1) = 1/(1+1/m)
当含包含 S = F, 全概率公式p(S) = p(1,1)+p(F)=1
对于任意 n,m 可以同样得出p(E(n,m)) = 1/m
很明显，当n<m时，只有p(F)~=0，而p(E(n,m))~=1。不失一般性，对于任意n,m都共同应用定理。所以可以得出p(E(n,m)) = 1/m
其中n<m时仍旧有p(F)~=0
这也可以想象到两质数互质时，一个质数不能够同时被两个质数整除。
微软面试2011年10月的其他集合问题
假如集合A和B中分别包括了1、3、5，还有9，那么(A共有几个元素,B有几个元素？).
参考1 2 3 5 9
*/
double P(int n, int m) {
    return 1/1.0 * ((double)((n - m) * m) / ((n + m) * (n + m - 1)));
}
double dfs(int n, int m) {
    double ans = 0.0;
    for (int x = 1; x <= n; x++) {
        for (int y = max(x, n - x); y <= n; y++) {
            ans += P(x, y) / (n * n * P(x, y));
        }
    }
    return ans;
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << dfs(n, m) << endl;
    cout << fixed << setprecision(4) << 1.0 * m/(n + m);
    return 0;
}
