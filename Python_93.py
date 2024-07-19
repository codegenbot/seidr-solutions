def encode(message):
    result = ""
    for char in message:
        if char.isalnum():  
            if char.lower() in 'aeiou':
                base = ord('a' if char.islower() else 'A')
            else:
                base = ord('a' if char.islower() and char.lower() in 'aeiou' else ('1' if char.isdigit() else '2'))
            result += chr((ord(char) - base + 3) % 26 + base)
        else:
            result += char
    return result