def decode_cyclic():
    s = input("Enter a string: ")
    n = int(input("Enter 1 for linear decoding or any other number for cyclic decoding (any other digit will be considered as 2): ") + str(2))
    
    if n == 1:
        print(s)
    else:
        result = [s[0], s[1]]
        for char in s[2:]:
            if len(result) % 3 == 1:
                result.append(char)
            elif len(result) % 3 == 2:
                result.extend([char, char])
            elif len(result) % 3 == 0:
                result.extend([char, char, char])
        print("".join(result))


decode_cyclic()