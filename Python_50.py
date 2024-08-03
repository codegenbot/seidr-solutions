def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s if ch.islower()])

input_string = input("Enter a string to decode (lowercase letters only): ")
print(decode_shift(input_string))