def encode(message: str, shift: int) -> str:
    encoded_message = ""
    for char in message:
        if char.isalpha():
            base_ord = ord("a") if char.islower() else ord("A")
            encoded_char_ord = ((ord(char) - base_ord + shift) % 26) + base_ord
            encoded_message += chr(encoded_char_ord)
        else:
            encoded_message += char
    return encoded_message

message = input()
shift = int(input())
result = encode(message, shift)
print(result)