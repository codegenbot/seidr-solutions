def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if char.lower() == 'a':
                    result += 'c'
                elif char.lower() == 'e':
                    result += 'g'
                elif char.lower() == 'i':
                    result += 'k'
                elif char.lower() == 'o':
                    result += 'q'
                else:
                    result += 'u'
            else:
                if char.isupper():
                    result += chr(ord(char) + 32)
                else:
                    result += chr(ord(char) - 32)
        else:
            result += char
    return result