import re

def decode_cyclic():
    s = input("Enter a string (contains only uppercase letters): ").strip()
    groups = [s[i:] + s[:i] for i in range(0, len(s), 3)]
    return "".join(groups)

if not re.match("^[A-Z]+$", decode_cyclic()):
    print("Input should contain only uppercase letters. Please try again.")
elif len(input_string) >= 3:
    result = decode_cyclic()
    print(result)
else:
    print("Input should have a length of at least 3. Please try again.")