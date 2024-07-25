def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            shift = 2 if 'a' <= char and char <= 'z' else 13
            result += chr((ord(char.lower()) - ord('a') + shift) % 26 + ord('a')) if char.islower() else chr((ord(char) - ord('A') + shift) % 26 + ord('A'))
        else:
            result += char
    return result