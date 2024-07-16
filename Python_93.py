def encode(message):
    vowels = "aeiouAEIOU"
    return "".join(
        chr(ord(char) + 1) if char.isalpha() and char.upper() in vowels
        else char.swapcase() if char.isalpha() else char
        for char in message
    ).lower()

print(encode(input("Enter a message: ").strip()))