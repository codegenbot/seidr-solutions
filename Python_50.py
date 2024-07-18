def decode_shift(s: str):
    decoded_str = ""
    for ch in s:
        if ch.isalpha() and ch.islower():
            decoded_str += chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")
        else:
            decoded_str += ch
    return decoded_str

input_str = input("Enter the string to decode: ")
print(decode_shift(input_str))