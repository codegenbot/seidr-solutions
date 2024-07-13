def decode_cyclic():
    s = str(input('Enter the cyclic string: '))
    decoded = ""
    for i in range(len(s)):
        if i < len(s) // 2:
            decoded += s[2*i]
        else:
            decoded += s[(i-1)%len(s)]
    return decoded