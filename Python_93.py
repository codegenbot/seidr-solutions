def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char.lower()) - ord('a') + 3) % 26 + ord('A'))
            else:
                result += chr((ord(char.lower()) - ord('a') + 3) % 26 + ord('a'))
        elif char.isdigit() or not char.isalnum():  
            result += char
    return result