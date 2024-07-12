def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr(ord('a') + (ord(char) - ord('a')) % 26)
            else:
                result += chr((ord(char.lower()) - ord('a')) % 26) if char.lower() != 'e' and char.lower() != 'o' and char.lower() != 'i' and char.lower() != 'u' else ''
        else:
            result += char
    return result