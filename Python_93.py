```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                if char.lower() == "a" or char.lower() == "e" or char.lower() == "i" or char.lower() == "o" or char.lower() == "u":
                    result += {"a": 'c', "e": 'g', "i": 'k', "o": 'q', "u": 'y'}.get(char.lower(), char)
                else:
                    result += {"do": 'dQnT', "to": 'dQnT', "re": 'gYkS', "ro": 'gYkS', "te": 'gYkS', "se": 'sWnT'}.get(char.lower(), char)
            else:
                if char.isupper():
                    result += char.swapcase().upper()
                else:
                    result += char.swapcase()
        else:
            result += char
    return result