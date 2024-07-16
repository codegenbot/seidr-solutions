def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            encoded_message += chr(ord(char) + 1)
        else:
            encoded_message += char
    return encoded_message

user_input = input("Enter a message containing only alphabets, including spaces: ")
print(encode(user_input))