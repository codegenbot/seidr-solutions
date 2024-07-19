def encode(message: str, shift: int) -> str:
    encoded_message = ""
    for char in message:
        if char.isalnum():
            base_ord = ord("a") if char.islower() else ord("A")
            encoded_char_ord = ((ord(char) - base_ord + shift) % 26) + base_ord
            encoded_message += chr(encoded_char_ord)
        else:
            encoded_message += char
    return encoded_message

message = input("Enter message to encode (letters and spaces only): ")
while not message.isalnum():
    message = input("Please enter alphabetic characters and spaces only: ")

shift = input("Enter shift value: ")
while not shift.isdigit():
    shift = input("Please enter an integer value for shift: ")
shift = int(shift)

result = encode(message, shift)
print(result)