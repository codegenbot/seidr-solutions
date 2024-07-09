import sys

def decode_cyclic(s):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)

if len(sys.argv) < 2:
    print("No input string provided. Please provide a string as a command line argument.")
    sys.exit(1)

input_string = sys.argv[1]
decoded_string = decode_cyclic(input_string)
print(f"Decoded string: {decoded_string}")