def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char) - 97 + 2) % 26 + 97)
            else:
                if char.isupper():
                    result += chr((ord('A') + ((ord(char) - ord('A')) + 2) % 26))
                else:
                    result += chr(ord('a') + (ord(char.lower()) - ord('a')) % 26)
        else:
            result += char
    return result