def decode_shift(s: str):
    if not s.islower():
        return "Input string should consist only of lowercase alphabets"
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

input_str = input("Enter the string to decode: ")
decoded_str = decode_shift(input_str)
print(decoded_str)