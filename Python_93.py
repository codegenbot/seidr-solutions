def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) + 13 - ord('A')) % 26 + ord('A'))
            else:
                result += chr((ord(char) + 13 - ord('a')) % 26 + ord('a'))
        elif char == ' ':
            result += ' '
    vowels = 'aeiouAEIOU'
    for i, char in enumerate(result):
        if char.lower() in vowels:
            result = result[:i] + chr((ord(char) - ord(vowels[vowels.index(char.lower())])) % 6 + ord('a')) + result[i+1:]
    return result