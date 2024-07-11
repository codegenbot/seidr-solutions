def decode_cyclic():
    s = input("Enter the cyclic string: ")
    result = ""
    i = 0
    if len(s) <= 1:
        return s
    while True:
        if i == 0:
            group = s[i] + ''.join([s[(i+1)%len(s)], s[:i+1][::-1][0]]) + s[i]
        else:
            group = s[i%len(s)] + ''.join([s[(i-1)%len(s)], s[:i][::-1][0]]) + s[i%len(s)]
        if i > 0:
            result += group[-1] + group[1:-1][::-1] + group[0]
        else:
            result = group
        i = (i+1)%len(s)
        if i == 0:
            break
    return result