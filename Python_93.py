def encode(message):
    vowels = 'aeiou'
    result = ""
    for char in message:
        if not char.isalpha():
            result += char
        elif char.lower() not in vowels:  
            index = (ord(char.lower()) - ord('a')) % 26
            result += chr((index + 1) % 26 + ord('a'))
        else:  
            result += char.lower()
    return result.upper() if message.isupper() else result