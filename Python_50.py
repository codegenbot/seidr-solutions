def decode_shift(s: str):
    return "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a") if ch.isalpha() and ch.islower() else ch for ch in s])

input_str = input("Enter the string to decode: ").lower()
result = decode_shift(input_str)
print(result)