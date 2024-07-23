```
def solve(N):
    result = ""
    while N > 0:
        remainder = N % 2
        if remainder == 1:
            result = "1" + result
        else:
            result = "0" + result
        N //= 2
    return result```