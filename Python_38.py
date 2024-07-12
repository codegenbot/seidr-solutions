def decode_cyclic():
    s = input("Enter a string: ")
    result = []
    if len(s) % 3 == 1:
        result.extend([s[0], s[1]] + list(s[2:]))
    elif len(s) % 3 == 2:
        result.extend(list(s[:2]) + [s[2]])
    else:
        for char in s:
            if len(result) % 3 == 0:
                if char != result[-1]:
                    result.append(char)
            elif len(result) % 3 == 1:
                if char != result[-1] and char != result[-2]:
                    result.extend([char])
    print("".join(result))


decode_cyclic()