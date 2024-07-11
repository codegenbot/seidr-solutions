def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 1 - ord("a")) % 26) + ord("a")) if ch.isalpha() or ch.isspace() else ch for ch in s])

input_str = input("Enter the string to decode: ").strip()
if input_str.islower() or input_str.isspace():
    result = decode_shift(input_str)
    print(result)
else:
    print("Input string should contain only lowercase alphabets and spaces.")