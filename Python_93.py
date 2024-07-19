```
def decode(encoded_message):
    result = ""
    for char in encoded_message:
        if char.isalnum():
            base = ord("a" if char.islower() else "A")
            shift = 3
            result += chr((ord(char) - base - shift) % 26 + base)
        else:
            result += char
    return result

while True:
    try:
        encoded_message = input("Enter a message to decode: ")
        break
    except:
        print("Invalid input. Please enter a valid string.")

decoded_message = decode(encoded_message)
print("Decoded message: ", decoded_message)