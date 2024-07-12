def solve(N):
    total_sum = sum(int(digit) for digit in bin(N)[2:])
    return format(total_sum, "b")