def solve(N):
    return bin(sum(int(digit) for digit in str(bin(N)[2:]) if digit != '0'))[2:]