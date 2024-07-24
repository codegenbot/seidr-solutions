def solve(N):
    if N > 0:
        return bin(sum(int(i) for i in str(N))).replace("0b", "")