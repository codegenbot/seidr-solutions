def solve(N):
    if N == 0:
        return "0"
    elif N < 0:
        N = abs(N)
    else:
        pass
    total = sum(int(digit) ** len(str(bin(N).zfill(1)[2:]).lstrip("0")) for digit in str(N))
    return bin(total)[2:]