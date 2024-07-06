def decode_cyclic():
    s = input("Enter a cyclic string: ")
    if not isinstance(s, str):
        return "Invalid input. Please provide a string."
    p = int(input("Enter the period of the cyclic string: "))
    result = ""
    i = 0
    while i < len(s):
        result += s[i]
        i += 1
    return result[:p]

print(decode_cyclic())