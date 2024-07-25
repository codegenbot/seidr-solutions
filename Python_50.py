def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

input_str = input("Enter the string to decode: ").lower()

print(decode_shift(input_str)) if input_str.islower() else print("Input string must contain only lowercase letters.")