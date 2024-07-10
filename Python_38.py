def decode_cyclic(s: str):
    groups = [s[i] for i in range(len(s))] + [s[0]
    return "".join(groups)

s = input("Enter a string: ")
result = decode_cyclic(s)
print(result)