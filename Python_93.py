```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                shift = 2
                if char.isupper():
                    shift = -26
                result += chr((ord(char) + shift) % 26 + ord('A') if char.isupper() else ord('a'))
            else:
                result += char
        else:
            result += char
    return result