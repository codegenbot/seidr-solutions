```
def decode_cyclic():
    s = input("Enter a cyclic string: ")
    if not isinstance(s, str):
        return
    result = ""
    length = len(s)
    i = 0
    while i < len(s):
        result += s[i]
        i = (i + 1) % length 
    return result

print(decode_cyclic())