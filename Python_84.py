def solve(N):
    n = int(str(bin(sum(int(i) for i in str(bin(N)[2:])))[2:]), 2)
    return bin(n)[2:]