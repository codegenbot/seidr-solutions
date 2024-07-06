```
def solve(N):
    if N < 2:
        return "1" * N
    else:
        binary = str(bin(N)[2:]).replace("1", "a").replace("0", "b")
        return str(int(binary, 2))