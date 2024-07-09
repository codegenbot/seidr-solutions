def solve(N):
    if N == 0:
        return "0"
    else:
        total = sum(int(digit) ** len(str(bin(N)[2:])) for digit in str(N))
        return bin(total)[2:]