import numpy as np
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
    n = input()
    m = input()
    n = int(n)
    m = int(m)
    arr = np.zeros((n,m))
    for i in range(n):
        for j in range(m):
            if i > j:
                arr[i,j] = 1
    print(np.mean(arr))
