def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                base = ord('a')
            else:
                base = ord('A')

            result += chr((ord(char) - base + 3) % 26 + base)
        else:
            result += char
    return result