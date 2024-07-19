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

message = input("Enter message to encode: ")
while not message.isalpha():
    message = input("Please enter alphabetic characters only: ")

shift = input("Enter shift value: ")
while not shift.isdigit():
    shift = input("Please enter an integer value for shift: ")
shift = int(shift)

result = encode(message, shift)
print(result)