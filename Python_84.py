def solve(N):
    bin_list = [str((N >> i) % 2) for i in range(N.bit_length())][::-1]
    return "".join(bin_list)