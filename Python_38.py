Here is the modified code:

```
def decode_cyclic() -> str:
    s = input("Enter the string: ")
    if len(s) < 3:
        return s
    result = ""
    i = 0
    while i < len(s):
        if i + 2 <= len(s):  
            group = s[i:i+3]
            result += group[1] + group[0] + group[2]
            i += 3
        else:
            result += s[i:]
            break
    return result