```python
def decode_cyclic():
    s = input("Enter the cyclic string: ")
    n = len(s)
    result = ""
    i = 0
    while i < n:
        group = s[i:i+3]
        if len(group) == 3 and (group[0] == 'a' or group[1] == 'b'):
            if group == 'abc':
                if i > 2:
                    result += 'xyz' + s[:i-2]
                else:
                    result = 'xy' + s[3:]
            elif group == 'bcd':
                if i < n - 3:
                    result += group
                else:
                    result += s[n-6:n] + 'w'
        elif len(group) > 1:
            result += group[-1] + group[1:-1] + group[0]
        else:
            result += group
        i = (i+3)%n
    return result

print(decode_cyclic())