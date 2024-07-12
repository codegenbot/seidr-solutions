import re

def decode_cyclic():
    s = input("Enter a string (contains only uppercase letters): ").strip()
    return s

input_string = decode_cyclic()

if not re.match("^[A-Z]+$", input_string):
    print("Input should contain only uppercase letters. Please try again.")
elif len(input_string) >= 3:
    result = decode_cyclic()
    groups = [result[i:] + result[:i] for i in range(0, len(result), 3)]
    print("".join(groups))
else:
    print("Input should have a length of at least 3. Please try again.")