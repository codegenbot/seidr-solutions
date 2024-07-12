```
def decode_cyclic(n) -> str:
    s = input("Enter a {} character cyclic string: ".format(n))
    
    if not isinstance(s, str):
        return "Invalid Input"

    result = ""
    while len(s) >= n:
        group = s[:n]
        result += group[1] + group[0] + group[-1]
        s = s[n:]
    if s:
        result += s
    return result

print(decode_cyclic(int(input("Enter the length of the cyclic string: "))))