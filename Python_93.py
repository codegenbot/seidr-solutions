def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char) - 97 + 2) % 26 + 97)
            else:
                result += chr((ord(char.lower()) - 97 + 13) % 26 + 97).upper() if char.isupper() else chr((ord(char.lower()) - 97 + 13) % 26 + 97)
        else:
            result += char
    return result