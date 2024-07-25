```
def encode(message):
    result = ""
    for char in message:
        if char == ' ':
            result += ' '
        elif char.isalnum():
            if char.isalpha():
                if char.islower():
                    result += chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
                else:
                    result += chr((ord(char) - ord('A') + 3) % 26 + ord('A'))
            else:
                result += char.lower()
        else:
            result += char.lower()
    return result

print(encode("I DoNt KnOw WhAt tO WrItE"))