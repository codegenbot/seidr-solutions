def decode_cyclic():
    s = input("Enter the cyclic string: ")
    result = ""
    i = 0
    while True:
        group = s[i:i+3]
        if len(group) == 3 and (group == 'abc' or group == 'bcd'):
            result += group
        elif len(group) > 1:
            result += group[2] + group[1] + group[0]
        else:
            result += group
        i = (i+3)%len(s)
        if i == 0: 
            break
    return result

print(decode_cyclic())