```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if 'a' <= char.lower() <= 'e':
                result += chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
            elif 'i' <= char.lower() <= 'u':
                result += chr((ord(char) - ord('i') + 3) % 26 + ord('a'))
            elif char.isupper():
                result += chr((ord(char.lower()) - ord('a') + 2) % 26 + ord('A')) if char.lower() in 'aeiou' else chr(ord(char))
            else:
                result += char
        else:
            result += char
    return result