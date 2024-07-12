def encode(message):
    vowels = 'aeiouAEIOU'
    result = ""
    for char in message:
        if not char.isalpha():
            result += char
        elif char in vowels:
            index = (ord(char) - ord('a')) % 26
            result += chr((index + 2) % 26 + ord('a'))
        else:
            result += char.upper()
    return result