def caesar_cipher(text):
    result = ""
    for char in text:
        if char.isalpha():
            if char.islower():
                result += chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
            else:
                result += chr((ord(char.lower()) - ord('a') + 3) % 26 + ord('a')).upper()
        else:
            result += char
    return result