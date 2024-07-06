def solve(N):
    decimal_sum = sum(int(i) for i in str(bin(N)[2:]))
    return bin(decimal_sum)[2:]