def decode_cyclic():
    s = str(input('Enter the cyclic string: '))
    decoded = ""
    for i in range(len(s)):
        decoded += s[i%len(s)] if i < len(s) // 2 else s[(i-1)%len(s)]
    return decoded