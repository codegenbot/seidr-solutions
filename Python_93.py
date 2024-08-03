```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                shift = 2
                if char.isupper():
                    result += chr((ord('A') + (ord(char) - ord('A') + shift)) % 26)
                else:
                    result += chr((ord('a') + (ord(char) - ord('a') + shift)) % 26)
            else:
                if char.isupper():
                    result += char
                else:
                    result += char
        else:
            result += char
    return result