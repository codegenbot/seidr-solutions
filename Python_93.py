def encode(message):
    vowels = "aeiouAEIOU"
    try:
        return "".join(
            chr(ord(char) + 1) if char.isalpha() and char.upper() in vowels
            else char.swapcase() if char.isalpha() else char
            for char in message
        ).lower()
    except Exception as e:
        return "Invalid input. Please enter a message containing only alphabets or special characters."

print(encode(input("Enter a message (alphabets or special characters only): ")))