```
def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            base = ord('a' if char.islower() else 'A')
            shift = 13
            result += chr((ord(char) - base + shift) % 26 + base)
        else:
            result += char
    return result

print("Enter a message to encode:")
message = input()
encoded_message = encode(message)
print("Encoded message: ", encoded_message)