def decode_cyclic(s: str):
    groups = [(s[i-1] + s[i-3:i-1]) if i % 3 else s[i-3:i] for i in range(3, len(s) + 1, 3)]
    return "".join(groups)

input_str = input("Enter a string with a length multiple of 3 and at least 3 characters: ")
if len(input_str) < 3 or len(input_str) % 3 != 0:
    print("Please enter a string with a length multiple of 3 and at least 3 characters.")
else:
    result = decode_cyclic(input_str)
    print(result)