def encodeMessage(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char.lower()) - ord('a') + 3) % 26 + ord('a')).upper()
            else:
                result += chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
        else: 
            result += char
    return result