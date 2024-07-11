def decode_cyclic():
    s = input("Enter the cyclic string: ")
    result = ""
    i = 0
    if len(s) > 1:
        while True:
            group = s[i:i+1] + s[i+2::-1][::-1] + s[i+1]
            result += group[-1] + group[1:-1][::-1] + group[0]
            i = (i+1)%len(s)
            if i == 0:
                break
        return result
    else:
        return s

print(decode_cyclic())