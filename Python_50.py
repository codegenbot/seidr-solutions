def decode_shift(s):
    return "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in s])


user_input = input("Enter text to decode: ")
decoded_text = decode_shift(user_input)
print("Decoded text:", decoded_text)