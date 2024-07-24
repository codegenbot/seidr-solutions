def solve(N):
    return bin(sum(int(i) for i in str((1 << N) - 1)[2:]))[2:]