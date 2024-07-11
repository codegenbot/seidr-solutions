def encode(message):
    vowels = "aeiouAEIOU"
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                new_char = chr((ord(char.lower()) - 96 + 2) % 26 + 96)
            elif char.isupper():
                if char.lower() not in vowels:
                    new_char = chr(((ord(char.lower()) - 64) % 26 + 1) % 26 + 64).swapcase()
                else:
                    new_char = chr((ord(char.upper()) - 64 + 2) % 26 + 64)
            else:
                if char.lower() not in vowels:
                    new_char = chr(((ord(char) - 97) % 26 + 1) % 26 + 97).swapcase()
                else:
                    new_char = char.swapcase()
            result += new_char
        else:
            result += char
    return result