def decode_cyclic():
    s = input("Enter a string: ")
    n = int(input("Enter 1 for linear decoding and any other number for cyclic decoding: "))
    
    if n == 1:
        print("".join(s))
    else:
        result = [s[0], s[1]]
        for i in range((len(s) + 1) // 3 * 3 - 2):
            chunk = s[i:i+3]
            if len(result) % 3 == 0:
                result.extend(list(chunk))
            elif len(result) % 3 == 1:
                if chunk[0] != result[-1]:
                    result.append(chunk[0])
            else:
                if chunk[0] != result[-1] and chunk[0] != result[-2]:
                    result.extend(chunk)
        print("".join(result))

decode_cyclic()