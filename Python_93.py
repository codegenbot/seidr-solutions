def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                new_char = chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
            else:
                new_char = chr((ord(char.upper()) - ord('A') + 2) % 26 + ord('A')) if char.isupper() else chr((ord(char.lower()) - ord('a') + 2) % 26 + ord('a'))
            result += new_char
        else:
            result += char
    return result