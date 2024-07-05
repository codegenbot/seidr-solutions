def solve(N):
    total_sum = sum(int(digit) for digit in str(N))
    print(bin(total_sum)[2:])