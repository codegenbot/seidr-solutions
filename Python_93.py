message = input("Enter message to encode (letters and spaces only): ")
while not all(char.isalpha() or char.isspace() for char in message):
    message = input("Please enter alphabetic characters and spaces only: ")

shift = input("Enter shift value: ")
while not shift.isdigit() or int(shift) < 0:
    shift = input("Please enter a non-negative integer value for shift: ")
shift = int(shift)

def caesar_cipher(message: str, shift: int) -> str:
    encoded_message = ""
    for char in message:
        if char.isalpha():
            shifted_char = chr(((ord(char) - ord('a' if char.islower() else 'A') + shift) % 26) + ord('a' if char.islower() else 'A'))
            encoded_message += shifted_char
        else:
            encoded_message += char
    return encoded_message

encoded_message = caesar_cipher(message, shift)
print("Encoded message:", encoded_message)