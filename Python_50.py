def decode_shift(input_string: str) -> str:
    decoded_message = "".join(chr(ord(char) + 1) for char in input_string)
    return decoded_message

input_string = input("Please enter a string: ").strip()
result = decode_shift(input_string)
print(result)