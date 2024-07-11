def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch for ch in s])

input_str = input("Enter the string to decode (lowercase letters and spaces only): ").strip()
if not input_str.islower() and not input_str.isspace():
    print("Input should contain only lowercase letters and spaces.")
else:
    result = decode_shift(input_str)
    print(result)