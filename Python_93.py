```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(char.lower()) - ord('a')
                result += chr((index + 2) % 5 + ord('a'))
            else:
                if char.isupper():
                    result += char.swapcase()
                else:
                    result += char.upper()
        else:
            result += char
    return result