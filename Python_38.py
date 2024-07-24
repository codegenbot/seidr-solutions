````
`def decode_cyclic():
    s = input("Enter the cyclic string: ")
    n = len(s)
    result = ""
    i = 0
    while i < n:
        group = s[i:i+3]
        if len(group) == 3 and (group[0] == 'a' and group[1] == 'b' or group[0] == 'b' and group[1] == 'c'):
            result += group
        elif len(group) > 1:
            result += group[2] + group[1] + group[0]
        else:
            result += group
        i = (i+3)%n
    return result`

print(decode_cyclic())`