message = input("Enter message to encode (letters and spaces only): ").strip()
assert message.replace(" ", "").isalpha(), "Please enter alphabetic characters and spaces only. Try again."

shift = input("Enter shift value: ").strip()
assert shift.isdigit() and int(shift) > 0, "Please enter a non-negative integer value for shift. Try again"
shift = int(shift)

def caesar_cipher(message, shift):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            encoded_char = chr((ord(char) - ascii_offset + shift) % 26 + ascii_offset)
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message

encoded_message = caesar_cipher(message, shift)
print("Encoded message:", encoded_message)