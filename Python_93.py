def encode(message):
    try:
        if message.isalpha() or not message:
            return "".join(
                char.swapcase() if char.isalpha()
                else char  # Return all characters unchanged
                for char in message
            )
        else:
            return "Invalid input. Please enter a message containing only alphabets or special characters."
    except Exception as e:
        return "Invalid input. Please enter a message containing only alphabets or special characters."

print(
    encode(input("Enter a message: "))
)