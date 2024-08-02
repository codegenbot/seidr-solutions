```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                result += chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
            else:
                result += chr((ord(char) - ord('a') + 1) % 26 + ord('a')) if char.islower() else chr((ord(char) - ord('A') + 1) % 26 + ord('A'))
        else:
            result += char
    return result