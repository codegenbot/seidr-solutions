```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                index = vowels.index(char.upper()) + 2
                if index >= len(vowels):
                    result += vowels[index % len(vowels)]
                else:
                    result += vowels[index]
            elif char.isupper():
                result += chr(ord(char) + 32)
            else:
                result += chr(ord(char) - 32)
        else:
            result += char
    return result