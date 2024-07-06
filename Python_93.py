```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                result += chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
            else:
                result += chr((ord(char.lower()) - ord('a') + 13) % 26 + ord('a')) if char.isupper() else char.swapcase()
        else:
            result += char
    return result