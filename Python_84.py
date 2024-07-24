```
def solve(N):
    return ("0" + bin(sum(int(i) for i in str(bin(N)[2:])))[2:]) if N > 0 else "0"