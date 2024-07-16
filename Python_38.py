def decode_cyclic(s: str):
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

while True:
    input_str = input("Enter a string of lowercase English alphabets with a length that is a multiple of 3: ").strip()
    if len(input_str) % 3 == 0:
        result = decode_cyclic(input_str)
        print(result)
        break
    else:
        print("Length of the input string must be a multiple of 3. Please try again.")