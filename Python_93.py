```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                new_char = chr((ord(char) - 97 + 3) % 26 + 97)
            else:
                new_char = 'a' if char.islower() else 'A'
        else:
            new_char = char
        result += new_char
    return result