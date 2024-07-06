```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                new_char = chr((ord(char) - ord('A') + 3) % 26 + ord('A'))
            else:
                new_char = chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
            result += new_char
        else:
            result += char
    return result