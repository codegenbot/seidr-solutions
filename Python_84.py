def solve(N):
    return bin(N)[2:].zfill(len(bin(2**len(str(N)) - 1))-1)