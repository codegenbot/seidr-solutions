def solve(N):
    return bin(sum(int(b) for b in str(bin(N))[2:])).replace("0b", "")