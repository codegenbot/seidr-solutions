def decode_cyclic(s: str):
    return "".join(
        [(group[-1] + group[:-1]) if len(group) == 3 else group for group in s.split()]
    )

while True:
    input_str = input("Enter the string to decode: ")
    if all(len(group) == 3 for group in input_str.split()):
        break
    print("Input should contain space-separated groups of three characters each. Please try again.")

result = decode_cyclic(input_str)
print(result)