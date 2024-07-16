def check(N):
    if isinstance(N, str):
        return N
    elif N < 0:
        return "-" + check(-N)
    else:
        s = bin(abs(N))[2:]
        if len(s) % 4 != 0:
            s = '0' * (4 - len(s) % 4) + s
        result = ''
        for i in range(0, len(s), 4):
            d4 = s[i:i+4]
            result += chr(int(d4, 2))
        return result