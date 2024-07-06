def solve(N):
    decimal_sum = sum(int(i) for i in str(bin(N)[2:]))
    binary_sum = bin(decimal_sum)[2:]
    return binary_sum