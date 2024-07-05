def solve(N):
    digit_sum = sum(int(digit) for digit in str(N))
    print(bin(digit_sum)[2:])