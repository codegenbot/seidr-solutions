def solve(N):
    binary = ""
    for i in range(N):
        if N % 2 == 0:
            binary = "0" + binary
        else:
            binary = "1" + binary
        N //= 2
    return binary