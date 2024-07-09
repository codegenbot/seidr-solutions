def solve(N):
    return bin(sum(int(digit) for digit in str(N)))[2:]