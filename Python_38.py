def decode_cyclic():
    s = input("Enter a string: ")
    n = int(input("Enter 1 for linear decoding and any other number for cyclic decoding: "))

    if n == 1:
        print(s)
    else:
        result = []
        while len(s) >= 3:
            result.extend([s[:3]])
            s = s[3:]
        if s:
            result.append(s)
        print("".join(result))


decode_cyclic()