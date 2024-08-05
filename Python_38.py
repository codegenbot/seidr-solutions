def decode_cyclic(s: str):
    return "".join(
        [(group[-1] + group[:-1]) if len(group) == 3 else group for group in s.split()]
    )

input_str = input("Enter the string to decode, with space-separated groups of characters: ")
result = decode_cyclic(input_str)
print(result)