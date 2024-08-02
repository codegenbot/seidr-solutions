def is_lowercase(s: str):
    return all(ord('a') <= ord(ch) <= ord('z') for ch in s)

def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

input_str = input("Enter the string to decode (lowercase letters only): ")
if is_lowercase(input_str):
    decoded_str = decode_shift(input_str)
    print(decoded_str)
else:
    print("Input string should contain only lowercase letters.")