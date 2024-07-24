import math


def solve(K):
    if K < 1:
        return str(0)
    if math.log2(K) % 1 == 0:
        return bin(int(math.pow(2, math.ceil(math.log2(K)))) - 1)[2:]
    binary = ""
    while K > 0:
        binary = str(K % 2) + binary
        K //= 2
    if int(binary, 2) != K:
        return str(int(binary, 2))
    else:
        return binary