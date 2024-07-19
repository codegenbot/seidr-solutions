```
def encode(message):
    result = ""
    is_alnum = False
    for char in message:
        if char.isalnum():
            if not is_alnum:
                base = ord('a' if char.islower() else 'A')
                shift = 3
            result += chr((ord(char) - base + shift) % 26 + base)
            is_alnum = True
        else:
            result += char
            is_alnum = False
    return result

print("Enter a message to encode:")
message = input()
encoded_message = encode(message)
print("Encoded message: ", encoded_message)