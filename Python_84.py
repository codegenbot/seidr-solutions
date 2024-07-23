def solve(N):
    return int(bin(sum(int(i) for i in str(bin(N))[2:])).replace("0b", ""), 2)