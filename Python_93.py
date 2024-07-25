def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            result += chr((ord(char.lower()) - ord('a') + 2) % 26 + ord('a')) if 'a' <= char and char <= 'z' or char.isupper() else chr((ord(char) - ord('A') + 13) % 26 + ord('A'))
        else:
            result += char
    return result