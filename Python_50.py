def decode_shift(input_str):
    decoded = ""
    for char in input_str:
        if char.isalpha():
            new_char = chr(ord(char) - 3)
            if not new_char.isalpha():
                new_char = chr(ord(new_char) + 26)
            decoded += new_char
        else:
            decoded += char
    return decoded

input_str = input().strip()
result = decode_shift(input_str)
print(result)