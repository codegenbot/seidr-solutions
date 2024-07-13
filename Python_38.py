def decode_cyclic():
    n = int(input('Enter the length of the decoded sequence: '))
    s = str(input('Enter the cyclic string: '))
    decoded = ""
    for i in range(n):
        if 2*i < len(s):
            decoded += s[2*i]
        else:
            decoded += s[-(i+1)%len(s)]
    return decoded