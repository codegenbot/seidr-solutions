```
def encode(message):
    vowels = "aeiouAEIOU"
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                new_char = chr((ord(char.lower()) - 96) % 26 + 96)
            else:
                new_char = chr((ord(char.lower()) + 3) % 26 + 97) if char.islower() \
                    else chr((ord(char) + 3) % 26 + 65)
            result += new_char
        else:
            result += char
    return result