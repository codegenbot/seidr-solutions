import re
import sys

def decode_cyclic(input_string):
    groups = [input_string[i:] + input_string[:i] for i in range(0, len(input_string), 3)]
    return "".join(groups)

input_string = sys.stdin.readline().strip()

if not re.match("^[A-Z]+$", input_string):
    print("Input should contain only uppercase letters. Please try again.")
elif len(input_string) >= 3:
    result = decode_cyclic(input_string)
    print(result)
else:
    print("Input should have a length of at least 3. Please try again.")