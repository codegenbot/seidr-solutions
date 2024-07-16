def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded_message += chr((ord(char) - ord('a') + 1) % 26 + ord('a'))
            else:
                encoded_message += chr((ord(char) - ord('A') + 1) % 26 + ord('A'))
        else:
            encoded_message += char
    return encoded_message

user_input = input("Enter a message containing only alphabets, including spaces: ")
if all(char.isalpha() or char.isspace() for char in user_input):
    print(encode(user_input))
else:
    print("Input should contain only alphabets and spaces.")