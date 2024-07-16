def encode(message):
    try:
        return "".join(
            char.swapcase() if char.isalpha()
            else char  # Return all characters unchanged
            for char in message
        )
    except Exception as e:
        return "Invalid input. Please enter a message containing only alphabets or special characters."

print(
    encode(input("Enter a message: "))
)