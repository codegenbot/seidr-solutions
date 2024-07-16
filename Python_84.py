```
def solve(N):
    if N == 0:
        return "0"
    if N < 0:
        return "-" + solve(-N)
    elif type(N) != int:
        pass
    else:
        s = bin(abs(N))[2:]
        if len(s) % 4 != 0:
            s = '0' * (4 - len(s) % 4) + s
        result = ''
        for i in range(0, len(s), 4):
            d4 = s[i:i+4]
            result += chr(int(d4, 2))
        return result