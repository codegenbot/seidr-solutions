```
import math


def solve(K):
    if K < 1:
        return str(0)
    if math.log2(K) % 1 == 0:
        return bin(int(math.pow(2, math.ceil(math.log2(K)))) - 1)[2:]
    else:
        return bin(K + 1)[2:]