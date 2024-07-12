def encode(message):
    vowels = 'aeiouAEIOU'
    result = ""
    for char in message:
        if not char.isalpha():
            result += char
        elif char.lower() not in vowels:  
            index = (ord(char.lower()) - ord('a')) % 26
            result += chr((index + 1) % 26 + ord('a'))
        elif char.lower() in vowels:  
            result += char.lower()
    return result