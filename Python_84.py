```''
def solve(N):
    bin_str = str(bin(N))[2:]
    sum_int = sum(int(digit) for digit in str(N))
    sum_bin = bin(sum_int)[2:]
    return bin_str + sum_bin
''```