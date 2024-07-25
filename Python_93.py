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
            elif char.isdigit():
                result += str(int(char) + 3)
        else:
            result += char
    return result

print(encode("I DoNt KnOw WhAt tO WrItE"))