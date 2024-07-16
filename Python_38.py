import sys

def decode_cyclic(s: str):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)

if len(sys.argv) != 2:
    print("Usage: python script.py <input_string>")
    sys.exit(1)

input_string = sys.argv[1]
if not input_string:
    raise ValueError("Input string cannot be empty.")
result = decode_cyclic(input_string)
print(result)