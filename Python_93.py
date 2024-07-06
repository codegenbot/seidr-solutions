```
def encode(message):
    vowels = "aeiouAEIOU"
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                result += chr((ord(char.lower()) - ord('a') + 2) % 26 + ord('a'))
            else:
                if char.isupper():
                    result += chr(ord(char) - ord('A') + 1).upper()
                else:
                    result += chr(ord(char) + 1)
        else:
            result += char
    return result