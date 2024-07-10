def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                if char.isupper():
                    result += chr((ord('a') + (ord(char) - ord('a')) - 2) % 26 + 65)
                else:
                    result += chr((ord('a') + (ord(char) - ord('a')) - 2) % 26 + 97)
            elif char.isupper():
                result += char.lower()
            else:
                result += char.upper()
        else:
            result += char
    return result