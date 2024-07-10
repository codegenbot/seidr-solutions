def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char) - 97 + 3) % 26 + 97)
            else:
                if char.isupper() and char.lower() in 'aeiou':
                    result += chr((ord('A') + (ord(char) - ord('A')) + 3) % 26 + 65)
                elif char.isupper():
                    result += chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    if char.lower() in 'aeiou':
                        result += chr((ord(char) - 97 + 3) % 26 + 97)
                    else:
                        result += chr((ord(char) - 97 + 3) % 26 + 97)
        else:
            result += char
    return result