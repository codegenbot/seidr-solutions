def encode(message):
    try:
        if message.isalnum():
            return "".join(
                char.swapcase() if char.isalpha() else char  # Swapcase for alphabets
                for char in message
            )
        else:
            return "Invalid input. Please enter a message containing only alphabets or special characters."
    except:
        return "Invalid input. Please enter a message containing only alphabets or special characters."


print(encode(input("Enter a message: ")))