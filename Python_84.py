def solve(N):
    total = sum(int(digit) for digit in str(N))
    return "0" if total == 0 else bin(total)[2:]