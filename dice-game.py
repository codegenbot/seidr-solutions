from fractions import Fraction
from itertools import product
"""
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
"""
if __name__ == '__main__':
    def peter_wins(n,m):
        if n < m:
            return Fraction(0,1)
        elif n == m:
            return Fraction(1,2)
        else:
            return Fraction(n-m+1, n*n)
    def solution(n,m):
        return sum(peter_wins(n,m) for n,m in product(range(1,n+1), range(1,m+1)))
    print(solution(1,2))
