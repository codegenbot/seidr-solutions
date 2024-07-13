def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                new_char = chr((ord(char.lower()) - ord('a') + 2) % 26 + ord('a'))
                if char.isupper():
                    result += new_char.upper()
                else:
                    result += new_char
            elif char.isupper():
                result += char.lower().swapcase()
            else:
                result += char.swapcase()
        else:
            result += char
    return result