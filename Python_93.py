```
def encode(message):
    vowels = "aeiouAEIOU"
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                new_char = chr((ord(char.lower()) - 96 + 2) % 26 + 96)
            else:
                new_char = chr((ord(char.upper().lower()) - 64 + 2) % 26 + 64) if char.isupper() else chr((ord(char.lower()) - 96 + 2) % 26 + 96)
            result += new_char.swapcase() if char.isupper() else new_char
        else:
            result += char
    return result