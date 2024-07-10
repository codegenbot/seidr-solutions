def solve(N):
    return bin(sum(int(i) for i in str(N).replace("0", "").replace("1", "")))[2:]