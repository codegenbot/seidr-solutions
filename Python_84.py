def solve(N):
    total_sum = 0
    while N > 0:
        if (N & 1) == 1:
            total_sum += 1
        N >>= 1
    return bin(total_sum)[2:]