```
import math


def solve(K):
    if K < 2:
        return "1"
    if K == 2:
        return "10"
    result = ""
    while K > 0:
        if (K & 1) == 1:
            result = "1" + result
        else:
            result = "0" + result
        K >>= 1
    return result