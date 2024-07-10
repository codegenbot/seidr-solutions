```
def solve(N):
    result = str(int(bin(sum(int(digit) for digit in str(bin(N)[2:]))) , 2))
    return result