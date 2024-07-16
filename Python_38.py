def decode_cyclic(s: str):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)


print("Enter a string in upper case alphabets:")
input_string = input().strip().upper()  # Read input in uppercase
result = decode_cyclic(input_string)
print(result)