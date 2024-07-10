def decode_cyclic(s: str):
    groups = [s[i] for i in range(2, len(s))] + [s[0] + s[1]]
    return "".join(groups)

s = input("Enter a string: ")
print(decode_cyclic(s))