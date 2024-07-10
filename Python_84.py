def solve(N):
    return str(format(sum(int(i) % 2 for i in range(N + 1)), "b"))