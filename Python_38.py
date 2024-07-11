def decode_cyclic():
    s = input("Enter the cyclic string: ")
    if len(s) < 3:
        return s
    result = ""
    i = 0
    while True:
        group = s[i:i+3]
        result += group[-1] + group[1:-1][::-1] + group[0]
        i = (i+3)%len(s)
        if i == 0 and len(result) == len(s):
            break
    return result

print(decode_cyclic())