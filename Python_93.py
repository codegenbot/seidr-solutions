def encode(message):
    vowels = 'aeiouAEIOU'
    result = ""
    for char in message:
        if not char.isalpha():
            result += char
        elif char in vowels:
            result += chr((ord(char) - ord('a')) % 26 + ord('a') + 2)
        else:
            result += char.upper()
    return result