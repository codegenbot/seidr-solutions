```
def decode_cyclic():
    s = input("Enter the cyclic string: ")
    result = ""
    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            group = s[i:i+3]
        else:
            group = s[i:]
        if len(group) == 3:
            result += group[2] + group[1] + group[0]
        else:
            result += group
        i += 1
    return result

print(decode_cyclic())```