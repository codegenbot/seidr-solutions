def decode_shift(input_str):
    decoded_str = ''
    for char in input_str:
        if char.isalpha():
            decoded_str += chr(ord(char) - 1)
        else:
            decoded_str += char
    return decoded_str

input_str = input().strip()
result = decode_shift(input_str)
print(result)