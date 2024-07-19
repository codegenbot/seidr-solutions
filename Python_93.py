def encode(message):
    result = ""
    for char in message:
        if char.isalnum():  
            if char.lower() in 'aeiou':
                base = ord('a' if char.islower() else 'A')
            else:
                base = ord('a' if char.islower() else 'A') if char.lower() in 'aeiou' else ord('0' if char.isdigit() else '1')
            result += chr((ord(char) - base + 3) % 26 + base)
        else:
            result += char
    return result