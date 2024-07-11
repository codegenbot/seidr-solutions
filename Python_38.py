def decode_cyclic():
    s = input("Enter the cyclic string: ")
    result = ""
    i = 0
    if len(s) <= 1:
        return s
    while True:
        group = s[i] + ''.join(s[i+1:i+2][::-1]) + s[i]
        result += group[-1] + group[1:-1][::-1] + group[0]
        i = (i+1)%len(s)
        if i == 0:
            break
    return result