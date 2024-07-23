def solve(N):
    bin_str = bin(N)[2:]
    digit_sum = sum(int(digit) for digit in str(N))
    return str(bin(digit_sum))[2:].zfill(len(bin_str)) + bin_str