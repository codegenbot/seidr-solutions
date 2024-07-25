def encode(message):
    result = ""
    for char in message:
        if char == ' ':
            result += ' '
        elif char.isalpha():
            if char.islower():
                result += chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
            elif char.isupper():
                result += chr((ord(char) - ord('A') + 3) % 26 + ord('A'))
        else:
            result += char
    return result

print(encode("I DoNt KnOw WhAt tO WrItE"))