def solve(N):
    bin_list = ["0" if i >= len(bin(N)[2:]) else str((N>>i)&1) for i in range(len(bin(N)[2:]))][::-1]
    return ''.join(bin_list)