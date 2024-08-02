def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

input_str = input("Enter the string to decode (lowercase letters only): ")
if input_str.islower() and len(input_str) > 0:
    decoded_str = decode_shift(input_str)
    print(decoded_str)