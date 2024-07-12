```Python
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ""
    for char in message:
        if not char.isalpha():
            result += char
        elif char in vowels:
            result += chr((ord(char) - ord('a')) % 26 + ord('a'))
        else:
            if char.isupper():
                result += chr((ord(char) - ord('A') + 3) % 26 + ord('A'))
            else:
                result += chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
    return result