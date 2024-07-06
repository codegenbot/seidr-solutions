def solve(N):
    return bin(sum(int(i) for i in str(format(N, 'b'))))[2:]