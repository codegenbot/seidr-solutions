def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += {char.lower(): 'ckioqu'[list('aeiou').index(char.lower())]}.get(char, char.swapcase())
        else:
            result += char
    return result