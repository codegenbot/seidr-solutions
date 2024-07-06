def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                if char == 'a' or char == 'e' or char == 'i' or char == 'o' or char == 'u':
                    result += chr((ord(char) - 97 + 3) % 26 + 97)
                else:
                    result += chr((ord(char) - 97 + ord('a') - 1).bit_length())
            else:
                if char == 'A' or char == 'E' or char == 'I' or char == 'O' or char == 'U':
                    result += chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    result += chr((ord(char) - 65 + ord('A') - 1).bit_length()).upper()
        else:
            result += char
    return result