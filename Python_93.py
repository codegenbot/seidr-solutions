```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (ord(char.lower()) - ord('a') + 2) % 26
                result += chr(ord('a') + index)
            else:
                if char.isupper():
                    result += chr((ord(char)-65+1)%26+65)
                else:
                    result += chr((ord(char)-97+1)%26+97)
        else:
            result += char
    return result