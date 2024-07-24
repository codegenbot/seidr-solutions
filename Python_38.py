```
def decode_cyclic():
    s = input("Enter the cyclic string: ")
    result = ""
    i = 0
    while i < len(s):
        if i + 2 <= len(s): 
            group = s[i:i+2]
        else:
            group = s[i:]
        if len(group) == 2 and (group == 'ab' or group == 'bc'):
            result += group[1] + group[0] 
        elif len(group) > 1:
            result += group[1] + group[0]
        else:
            result += group
        i += 2 
    return result

print(decode_cyclic())