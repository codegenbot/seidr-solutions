def solve(N):
    total = sum(int(digit) for digit in str(bin(N)[2:]).lstrip('0'))
    return '1' if total % 2 == 0 else '0'