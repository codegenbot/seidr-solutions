def decode_cyclic():
    s = input("Enter a string: ")
    result = []
    for char in s:
        if len(result) % 3 == 1:
            if char != result[-1]:
                result.append(char)
        elif len(result) % 3 == 2:
            if char != result[-1] and char != result[-2]:
                result.extend([char])
    print("".join(result))

decode_cyclic()