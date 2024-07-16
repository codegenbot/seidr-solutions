def decode_cyclic(s: str):
    if not s or not s.isalpha() or not s.islower():
        return "Input string should contain only lowercase English alphabets."

    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

input_str = input("Enter a string of lowercase English alphabets (a-z): ").strip()
while not input_str.islower():
    print("Invalid input. Please enter a valid string of lowercase English alphabets (a-z).")
    input_str = input("Enter a string of lowercase English alphabets (a-z): ").strip()

result = decode_cyclic(input_str)
print(result)