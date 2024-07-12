```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                result += chr((ord(char) - 97 + 2) % 26 + 97) if char.islower() else chr((ord(char) - 65 + 2) % 26 + 65)
            else:
                result += char
        else:
            result += char
    return result