def decode_shift(input_str):
    result = ""
    for char in input_str:
        if char.isalpha():
            shifted_char = chr((ord(char) - 97 + 3) % 26 + 97)
            result += shifted_char
        else:
            result += char
    return result

input_str = input("Enter the string to decode: ").strip()
result = decode_shift(input_str)
print(result)