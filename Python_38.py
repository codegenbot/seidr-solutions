```
def decode_cyclic():
    s = input("Enter a string: ")
    result = []
    for i, char in enumerate(s):
        if (i + 1) % 3 == 1:
            if len(result) > 0 and char != result[-1]:
                result.append(char)
        elif (i + 1) % 3 == 2:
            if len(result) > 1 and char != result[-1] and char != result[-2]:
                result.extend([char])
    print("".join(result))

decode_cyclic()