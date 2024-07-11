def encode(message):
    vowels = "aeiou"
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                new_char = chr((ord(char.lower()) - 97 + 2) % 26 + 97) if char.islower() else chr((ord(char.upper()) - 65 + 2) % 26 + 65)
            else:
                new_char = char.swapcase()
            result += new_char
        else:
            result += char
    return result