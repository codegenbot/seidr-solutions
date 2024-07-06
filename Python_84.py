"""
def solve(N):
    result = 0
    for i in str(bin(N)[2:]):
        if i == '1':
            result += 2 ** (len(str(bin(N)[2:])) - 1)
    return bin(result)[2:]
"""