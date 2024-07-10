```
def solve(N):
    if N == 0:
        return "0"
    if N < 0:
        return "-" + bin(abs(N))[2:].replace("1", "9").replace("0", "8")
    else:
        return bin(N)[2:].replace("1", "9").replace("0", "8")