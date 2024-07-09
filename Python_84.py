def solve(N):
    if N == 0:
        return "0"
    else:
        total = sum(int(digit) ** len(str(bin(int(N)).zfill(32)[2:]).lstrip("0")) for digit in str(N))
        return bin(total).lstrip("0b")