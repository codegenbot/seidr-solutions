def decode_cyclic(s: str):
    if len(s) == 0:
        return ""
    
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)

input_string = input("Enter a string: ").strip()
if len(input_string) > 0:
    result = decode_cyclic(input_string)
    print(result)
else:
    print("Input string is empty.")