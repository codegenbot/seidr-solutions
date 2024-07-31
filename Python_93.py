```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == 'X' or char == 'x':
                    encoded_message += 'z'
                elif char == 'Y' or char == 'y':
                    encoded_message += 'b'
                else:
                    encoded_message += chr(ord(char) + 32)
            else:
                if char == 'a' or char == 'A':
                    encoded_message += 'c' if char.isupper() else 'C'
                elif char == 'e' or char == 'E':
                    encoded_message += 'g' if char.isupper() else 'G'
                elif char == 'i' or char == 'I':
                    encoded_message += 'k' if char.isupper() else 'K'
                elif char == 'o' or char == 'O':
                    encoded_message += 'q' if char.isupper() else 'Q'
                elif char == 'u' or char == 'U':
                    encoded_message += 'w' if char.isupper() else 'W'
                else:
                    encoded_message += chr(ord(char) + 2)
        else:
            encoded_message += char
    return encoded_message