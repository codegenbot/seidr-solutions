```
def solve(K):
    K = str(int(K)) if type(K) == float else str(K)
    return bin(int(K))[2:]