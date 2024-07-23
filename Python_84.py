def solve(N):
    total_sum = sum(int(i) for i in str(bin(N)[2:]))
    return bin(total_sum)