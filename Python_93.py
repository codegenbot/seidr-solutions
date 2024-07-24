```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                new_char = chr((ord(char) - 97 + 2) % 26 + 97)
            else:
                new_char = char.swapcase()
            result += new_char
        else:
            result += char
    return result