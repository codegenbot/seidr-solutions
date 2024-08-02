```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                result += chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
            else:
                result += chr((ord(char.upper()) - ord('A') + 1) % 26 + ord('A')) if char.isupper() else chr((ord(char.lower()) - ord('a') + 1) % 26 + ord('a'))
        else:
            result += char
    return result