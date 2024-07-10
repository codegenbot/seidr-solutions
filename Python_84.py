def solve(N):
    return bin(sum(int(i) for i in str(bin(N)[2:]))) [2:].zfill(len(str(bin(N)[2:]))).replace("0b", "")