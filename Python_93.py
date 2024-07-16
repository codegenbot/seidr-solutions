def encode(message):
    if all(char.isalpha() or char.isspace() for char in message):
        return "".join(char.swapcase() if char.isalpha() else char for char in message)
    else:
        return "Invalid input. Please enter a message containing only alphabets, including spaces."

print(encode(input("Enter a message: ")))