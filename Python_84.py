```
def solve(N):
    if N > 0:
        s = str(bin(N)[2:])
        return bin(sum(int(i) for i in s)) if s else "0"
    else:
        return "0"