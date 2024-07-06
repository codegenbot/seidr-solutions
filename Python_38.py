def decode_cyclic():
    s = input("Enter a cyclic string: ")
    if not isinstance(s, str):
        return "Invalid input. Please provide a string."
    result = ""
    i = 0
    while i < len(s):
        result += s[i]
        i += 1
    return result

print(decode_cyclic())