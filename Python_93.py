````
' def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(char.lower()) - ord('a')
                new_char = chr((index + 2) % 26 + ord('a'))
                if char.isupper():
                    new_char = new_char.upper()
                result += new_char
            else:
                if char.isupper():
                    result += char.lower()
                else:
                    result += char
        else:
            result += char
    return result''
```