```
def decode_cyclic():
    s = input("Enter the cyclic string: ")
    n = len(s)
    result = ""
    i = 0
    while i < n:
        if i == n - 1 or (s[i:i+3] != s[0:n-i-2][-2:] and s[i:i+3] != s[-3]):
            result += s[i]
        else:
            group = s[i:i+3]
            if len(group) == 3 and group[0:2] == s[-2:]:
                result += group
            elif len(group) > 1:
                result += group[2] + group[1] + group[0]
            else:
                result += group
        i = (i+3)%n
    return result

print(decode_cyclic())