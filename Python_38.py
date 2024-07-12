import re

def decode_cyclic(s: str):
    groups = [s[i:] + s[:i] for i in range(0, len(s), 3)]
    return "".join(groups)

input_string = input("Enter a string (contains only uppercase letters): ").strip()

if not re.match("^[A-Z]+$", input_string):
    print("Input should contain only uppercase letters. Please try again.")
elif len(input_string) >= 3:
    result = decode_cyclic(input_string)
    print(result)
else:
    print("Input should have a length of at least 3. Please try again.")