import math


def solve(K):
    if K < 1:
        return '0b0'
    if math.log2(K) % 1 == 0:
        return '0b' + bin(int(math.pow(2, math.ceil(math.log2(K)))) - 1)[2:]
    else:
        return '0b' + bin(K + 1)[2:]