def encode(message):
    result = ""
    for char in message:
        if char == " ":  
            result += char
        else:
            if char.isalpha():
                shift = 3 if char.isupper() else 3
                result += chr(((ord(char) - 65 + shift) % 26) + 65) if char.isupper() else chr(((ord(char.lower()) - 97 + shift) % 26) + 97)
            else: 
                result += char
    return result