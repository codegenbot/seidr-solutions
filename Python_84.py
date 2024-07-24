def solve(N):
    if N > 0:
        return bin(sum(int(digit) for digit in str(bin(N)[2:])))[2:]
    else:
        return "0"