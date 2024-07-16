def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            encoded_message += chr((ord(char) - ord('a') + 1) % 26 + ord('a')) if char.islower() else chr((ord(char) - ord('A') + 1) % 26 + ord('A'))
        elif char == " ":
            encoded_message += " "
    return encoded_message

user_input = input("Enter a message containing only alphabets, including spaces: ")
if user_input.replace(" ", "").isalpha():
    print(encode(user_input))
else:
    print("Input should contain only alphabets and spaces.")