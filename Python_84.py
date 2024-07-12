```
def solve(N):
    result = ''
    for i in bin(N)[2:]:
        if i == '1':
            result += '3'
        else:
            result += '6'
    return int(result)