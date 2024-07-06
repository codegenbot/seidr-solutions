def solve(N):
    bin_list = [str((N>>i)&1) for i in range(N.bit_length())][::-1]
    return ''.join(bin_list)