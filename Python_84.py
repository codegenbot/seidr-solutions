import math


def solve(K):
    if K < 1:
        return "0"
    binary = "1"
    while K > 1:
        binary = str(K % 2) + binary
        K //= 2
    return binary