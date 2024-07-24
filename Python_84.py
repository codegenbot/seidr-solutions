def solve(N):
    return bin(sum(int(i) for i in str((1<<len(str(bin(N)[2:]))-1)^int(bin(N)[2:],2)))[2:]