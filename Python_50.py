def decode_shift(input_str):
    decoded_result = ""
    for char in input_str:
        if char.isalpha():
            decoded_result += chr((ord(char) - 3 - ord('a')) % 26 + ord('a'))
        else:
            decoded_result += char
    return decoded_result

input_str = input().strip()
result = decode_shift(input_str)
print(result)