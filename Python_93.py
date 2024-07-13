```
def encode(message):
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if char == 'a': 
                    encoded_message += 'c'
                elif char == 'e': 
                    encoded_message += 'g'
                elif char == 'i': 
                    encoded_message += 'k'
                elif char == 'o': 
                    encoded_message += 'q'
                elif char == 'u': 
                    encoded_message += 'y'
            else:
                if char.isupper():
                    encoded_message += chr((ord(char) + 2 - ord('A')) % 26 + ord('A'))
                else:
                    encoded_message += chr((ord(char) + 2 - ord('a')) % 26 + ord('a'))
        else:
            encoded_message += char
    return encoded_message