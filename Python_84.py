def solve(N):
    return bin(sum(int(i) for i in bin(N)[2:].split('0')))[2:]