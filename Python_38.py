def decode_cyclic():
    n = int(input("Enter a number: "))
    s = input(f"Enter a string of {3*n} characters: ")
    result = []
    i = 0
    while i < len(s):
        group = s[i : i + 3]
        if len(group) == 1:
            result.append(group[0])
        elif len(group) >= 2:
            if len(group) == 2:
                result.append(group[1])
                i += 2
            else:
                result.extend([group[0], group[1]])
                i += 3
    print("".join(result))


decode_cyclic()