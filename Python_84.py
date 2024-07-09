def solve(N):
    if N == 0:
        return "0"
    else:
        total = sum(int(digit) ** len(str(bin(N).zfill(1)[2:]).lstrip("0")) for digit in str(N))
        if total == 0:
            return "0"
        else:
            return bin(total)[2:]