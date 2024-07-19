def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            if char.lower() in 'aeiou':
                base = ord('a') if char.islower() else ord('A')
            else:
                base = ord('a') if char.islower() else ord('A')

            result += chr((ord(char) - base + 3) % 26 + base)
        else:
            result += char
    return result