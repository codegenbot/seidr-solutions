Here is the modified code:

```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if 'AEIOUY'.find(char.lower()) != -1:
                    index = ord('A') + ['EIOU', 'AEIOU'][ord(char) - ord('A')]
                    result += chr(index)
                else:
                    result += chr(ord(char) + 1)
            else:
                if char in ['a', 'e', 'i', 'o', 'u']:
                    index = ord('c') + list('aeio').index(char)
                    result += chr(index)
                else:
                    result += chr(ord(char) + 1)
        else:
            result += char
    return result