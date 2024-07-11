```
def encode(message):
    vowels = "aeiouAEIOU"
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                new_char = chr((ord(char.lower()) - 96 + 2) % 26 + 96)
            else:
                new_char = chr((ord(char.lower()) - 97 + 2) % 26 + 97)
            result += new_char
        else:
            result += char
    return result