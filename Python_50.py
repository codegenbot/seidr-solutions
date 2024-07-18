def decode_shift(s: str):
    if not s.islower():
        return "Input should only contain lowercase letters"
    return "".join([chr(((ord(ch) - 7 - ord("a")) % 26) + ord("a") for ch in s])

input_str = input("Enter the string to decode: ")
result = decode_shift(input_str)
print(result)