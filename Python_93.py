def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            encoded_message += chr((ord(char) - ord('a') + 1) % 26 + ord('a')) if char.islower() else chr((ord(char) - ord('A') + 1) % 26 + ord('A'))
        else:
            encoded_message += char
    return encoded_message

user_input = input("Enter a message: ")
if all(char.isalpha() or char.isspace() or char.isdigit() for char in user_input):
    print(encode(user_input))
else:
    print("Input should contain only alphabets, digits, and spaces.")