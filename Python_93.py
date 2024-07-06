Here is the completed code:

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
                result += chr(97 + ((ord(char.lower()) - ord('a')) % 26))
        else:
            result += char
    return result