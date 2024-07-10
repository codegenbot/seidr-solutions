def solve(N):
    N = bin(N)[2:]
    result = ""
    for i in N:
        if i == '1':
            result += "0"
        else:
            result += "1"
    return result