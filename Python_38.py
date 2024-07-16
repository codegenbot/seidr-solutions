def decode_cyclic(s: str):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)


input_string = input("Enter a string: ").strip()
if not input_string.isalpha() or not input_string.islower():
    print("Input should contain only lowercase alphabetic characters.")
else:
    result = decode_cyclic(input_string)
    print(result)