```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ""
    for char in message:
        if not char.isalpha():
            result += char
        elif char.lower() in vowels:  
            index = (ord(char.lower()) - ord('a')) % 26
            if index == 0:
                index = 26
            result += chr((index + 1) % 26 + ord('a'))
        else:
            result += char.upper()
    return result