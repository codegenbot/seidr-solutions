def solve(N):
    if N < 2:
        return str(N)
    binary = '1'
    while N > 1:
        if N % 2 == 0:
            N //= 2
            binary += '0'
        else:
            N -= 1
            binary += '1'
    return binary