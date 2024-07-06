def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                if char == 'a' or char == 'e' or char == 'i' or char == 'o' or char == 'u':
                    result += chr((ord(char) - 97 + 3) % 26 + 97)
                else:
                    result += chr((ord(char) - 97) + (1 if char.isnumeric() else len(bin(ord(char) - 97)[2:]) % 8))
            else:
                if char == 'A' or char == 'E' or char == 'I' or char == 'O' or char == 'U':
                    result += chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    result += chr((ord(char) - 65) + (1 if char.isnumeric() else len(bin(ord(char) - 65)[2:]) % 8)).upper()
        else:
            result += char
    return result