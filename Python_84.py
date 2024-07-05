def solve(N):
    total_sum = sum(int(digit) for digit in str(N))
    return bin(total_sum)[2:]