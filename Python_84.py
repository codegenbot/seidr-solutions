def solve(N):
    result = ''
    for i in bin(N)[2:]:
        if i == '1':
            result += str(int(i, 2))
        else:
            result += '0'
    return result