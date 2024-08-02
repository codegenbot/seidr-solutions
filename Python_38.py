def decode_cyclic(s: str):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range(len(s) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups).zfill(len(s))

input_string = input("Enter the input string: ")
input_string += '0' * (3 - len(input_string) % 3)
result = decode_cyclic(input_string)
print(result)