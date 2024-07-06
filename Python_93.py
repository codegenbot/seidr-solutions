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
                    result += chr(ord('A') + ((ord(char) - ord('A')) % 26))
                else:
                    result += chr(ord('a') + ((ord(char) - ord('a')) % 26))
        else:
            result += char
    return result