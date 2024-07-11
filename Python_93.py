def encode(message):
    vowels = "aeiouAEIOU"
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                new_char = chr((ord(char.lower()) - 96 + 2) % 26 + 96)
            elif char.isupper():
                new_char = chr((ord(char.lower()) - 64 + 2) % 26 + 64)
            else:
                if char.isupper():
                    new_char = char.upper()
                else:
                    new_char = char.lower()
            result += new_char
        else:
            result += char
    return result