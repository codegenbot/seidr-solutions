```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                result += chr((ord(char.lower()) + 2 - ord('a')) % 26 + ord('a'))
            else:
                if char.isupper():
                    result += 'T' if char == 't' else 'Z'
                else:
                    result += 't' if char == 'T' else 'z'
            else:
                result += char
        else:
            result += char
    return result