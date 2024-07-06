```
def solve(N):
    result = 0
    count = len(str(bin(N)[2:]))
    for i in str(bin(N)[2:]):
        if i == "1":
            result += 2 ** (count - 1)
        count -= 1
    return bin(result)[2:]