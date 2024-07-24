def solve(K):
    if K < 1:
        return str(K)
    binary = ''
    while K > 0:
        binary = str(K % 2) + binary
        K //= 2
    return binary