def solve(N):
    return bin(sum(int(digit) for digit in format(N, 'b')))[2:]