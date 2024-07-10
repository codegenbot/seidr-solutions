def solve(N):
    total_sum = sum(int(i) % 2 for i in range(1, N+1))
    result = str(bin(total_sum)[2:])
    return result