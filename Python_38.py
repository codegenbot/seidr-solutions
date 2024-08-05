def decode_cyclic(s: str):
    return "".join([(group[-1] + group[:-1]) if len(group) == 3 else group for group in s.split()])

input_string = input("Enter a string: ")
result = decode_cyclic(input_string)
print(result)