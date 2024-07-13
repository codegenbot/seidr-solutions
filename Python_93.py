```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                char = chr((ord(char) - ord('A') + 7) % 26 + ord('A'))
            else:
                char = chr((ord(char) - ord('a') + 7) % 26 + ord('a'))
        result += char
    return result.replace('a', 'c').replace('e', 'g').replace('i', 'k').replace('o', 'q').replace('u', 'w')