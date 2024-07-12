def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord('a' if char.islower() else 'A') + ((ord(char) - ord('a' if char.islower() else 'A')) + 2) % 26))
            else:
                result += chr((ord('A' if char.isupper() else 'a') + ((ord(char) - ord('A' if char.isupper() else 'a')) + 3) % 26))
        else:
            result += char
    return result