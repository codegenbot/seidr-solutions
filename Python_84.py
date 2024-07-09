def solve(N):
    total = sum(int(digit) for digit in str(N))
    return bin(total)[2:]