def decode_cyclic():
    s = input("Enter a string: ")
    n = int(input("Enter 1 for linear decoding and any other number for cyclic decoding: "))
    
    if n == 1:
        print(s)
    else:
        result = []
        for i, char in enumerate(s):
            if i < len(result) or (i % len(result)) < 2:
                result.append(char)
            elif result[-1] != char:
                result.append(char)
        print("".join(result))

decode_cyclic()