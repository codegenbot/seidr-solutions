def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if s[i] == '2':
            result.append('1' + s[i-1] + '3')
        elif s[i] == '3':
            result.append('2' + s[i+1])
        else:
            result.append(s[i])
        i += 1
    return "".join(result)