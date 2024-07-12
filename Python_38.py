def decode_cyclic():
    s = input("Enter a string: ")
    n = int(input("Enter 1 for linear decoding and any other number for cyclic decoding: "))

    if n == 1:
        print(s)
    else:
        result = ""
        i = 0
        while i < len(s):
            result += s[i]
            if i < len(s) - 2:
                result += s[i+1] * 2
            i += 3
        print(result)


decode_cyclic()