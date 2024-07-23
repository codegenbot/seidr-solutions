def decode_cyclic():
    s = input("Enter your cyclic string: ")
    result = []
    i = 0
    while i < len(s):
        group = s[i:i+3]
        if len(group) == 2:
            result.append(group[1] + group[0])
        else:
            result.append(group)
        i += 3
    print("Decoded string:", "".join(result))