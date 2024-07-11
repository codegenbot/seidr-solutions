def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if char.isupper():
                    result += chr((ord(char) - 65 + 3) % 26).lower()
                else:
                    result += 'aeiou'[(ord(char) - 97) % 5].lower()
            else:
                if char.isupper():
                    result += chr((ord(char) - 65 + 1) % 26).upper()
                else:
                    result += chr(ord(char) + 1)
        else:
            result += char
    return result