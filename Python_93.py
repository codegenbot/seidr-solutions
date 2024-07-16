def encode(message):
    vowels = "aeiouAEIOU"
    return "".join(
        (
            chr(ord(char) + 1)
            if char.isalpha() and char.upper() in vowels
            else char.swapcase() if char.isalpha() else char
        )
        for char in message
    )


try:
    print(
        encode(input("Enter a message containing only alphabets or special characters: "))
    )
except ValueError:
    print("Invalid input. Please enter a message containing only alphabets or special characters.")