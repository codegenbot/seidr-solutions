```
def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            base = ord("a" if char.islower() else "A")
            shift = 3
            result += chr((ord(char) - base + shift) % 26 + base)
        else:
            result += char
    return result


while True:
    try:
        message = input("Enter a message to encode: ")
        break
    except:
        print("Invalid input. Please enter a valid string.")

encoded_message = encode(message)
print("Encoded message: ", encoded_message)