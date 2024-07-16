def decode_shift(input_str):
    decoded = ""
    for char in input_str:
        if char.isalpha():
            decoded += chr((ord(char) - 3 - ord('a')) % 26 + ord('a'))
        else:
            decoded += char
    return decoded

input_str = input().strip()
result = decode_shift(input_str)
print(result)