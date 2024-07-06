def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += char
            else:
                if char.islower():
                    result += chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
                else:
                    result += chr((ord(char.lower()) - ord('a') + 3) % 26 + ord('a')).upper()
        else:
            result += char
    return result