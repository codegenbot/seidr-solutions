````
`def decode_cyclic():
    s = input("Enter the cyclic string: ")
    n = len(s)
    result = ""
    i = 0
    while i < n:
        if i >= len(s):
            group = s[i%len(s):i%len(s)+3]
        else:
            group = s[i:i+3]
        if len(group) == 3 and (group == 'abc' or group == 'bcd'):
            result += group
        elif len(group) > 1:
            result += group[2] + group[1] + group[0]
        else:
            result += group
        i = (i+3)%n
    return result`

print(decode_cyclic())