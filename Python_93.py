def encode(message):
    vowels = 'aeiouAEIOU'
    result = ""
    for char in message:
        if not char.isalpha():
            result += char
        elif char.lower() not in vowels:  
            index = (ord(char.lower()) - ord('a'))
            result += chr((index + 1) % 26 + ord('a'))
        else:
            result += char.upper()
    return result