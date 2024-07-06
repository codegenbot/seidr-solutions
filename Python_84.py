def solve(N):
    result = 0
    for i in str(bin(N)[2:]):
        result += int(i)
    return bin(result)[2:]