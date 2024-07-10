def decode_cyclic(s: str):
    rotated_groups = [s[i-1] for i in range(len(s))]
    return "".join(rotated_groups)

s = input("Enter a string: ")
result = decode_cyclic(s)
print(result)