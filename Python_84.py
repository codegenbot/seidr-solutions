def solve(N):
    if N > 0:
        bin_sum = sum(int(i) for i in str(bin(N)[2:]))
        return bin(bin_sum)[2:]
    else:
        return "0"