```
def solve(N):
    if N == 0:
        return "0"
    else:
        total = sum(int(digit) ** len(str(bin(1<<N).zfill(2)[3:]).lstrip("0")) for digit in str(N))
        return bin(total)[2:]