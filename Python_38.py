def decode_cyclic():
    s = input("Enter the cyclic string: ")
    n = len(s)
    decoded = ""
    for i in range(n):
        if i % 2 == 0:
            decoded += s[i]
        else:
            decoded += s[n - (i + 1)]
    return decoded