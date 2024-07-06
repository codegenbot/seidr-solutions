```
def decode_cyclic():
    s = input("Enter a cyclic string: ")
    if not isinstance(s, str):
        return "Invalid input. Please provide a string."
    p = int(input("Enter the period of the cyclic string: "))
    result = ""
    for i in range(0, len(s), p):
        result += s[i:i+p]
    return result

print(decode_cyclic())