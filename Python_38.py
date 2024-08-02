def decode_cyclic(s: str):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)

input_string = input("Enter the input string: ").strip()
while len(input_string) % 3 != 0:
    input_string = input("Please enter a string length divisible by 3: ").strip()
result = decode_cyclic(input_string)
print(result)