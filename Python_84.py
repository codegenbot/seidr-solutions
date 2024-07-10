```
def solve(N):
    if N != 0 and (N & (N - 1) == 0):
        result = str(int(bin(sum(int(i) for i in str(bin(N)[2:]))), 2))
        return result
    else:
        return "Input is not a power of 2."