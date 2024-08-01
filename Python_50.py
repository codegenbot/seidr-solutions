input_string = input("Enter a lowercase alphabetic string to decode: ")
def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a") if ch.islower() else ch for ch in s])

print(decode_shift(input_string))