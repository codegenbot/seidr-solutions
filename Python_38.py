def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        return "Input length must be a multiple of 3"
    
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range(len(s) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)

input_str = input("Enter a string: ")
result = decode_cyclic(input_str)
print(result)