```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - ord('A') + 3) % 26 + ord('A'))
            else:
                result += chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
        else:
            result += char
    vowels = 'aeiouAEIOU'
    for i in range(len(result)):
        if result[i] in vowels:
            if result[i].isupper():
                result = result[:i] + chr((ord(result[i]) - ord('A') + 4) % 26 + ord('A')) + result[i+1:]
            else:
                result = result[:i] + chr((ord(result[i]) - ord('a') + 4) % 26 + ord('a')) + result[i+1:]
    return result