```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                new_char = chr((ord(char) - 65 + 3) % 26 + 65)
            else:
                new_char = chr((ord(char) - 97 + 3) % 26 + 97)
            if 'aeiouAEIOU'.index(new_char.lower()) in [1, 4, 9, 15, 21]:
                new_char = chr((ord(new_char) - ord('a' if char.islower() else 'A') + 2) % 26 + ord('a' if char.islower() else 'A'))
            result += new_char
        else:
            result += char
    return result