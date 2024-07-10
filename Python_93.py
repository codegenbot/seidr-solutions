def pig_latin(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == 'X' or char == 'x':
                    result += 'ay'
                elif char == 'Y' or char == 'y':
                    result += 'by'
                else:
                    result += chr(ord(char) + 1).lower()
                    result += 'ay'
            else:
                if char in ['a', 'e', 'i', 'o', 'u']:
                    result += char
                else:
                    result += chr(ord(char) - ord('a') + 1)
                    result += 'ay'
        else:
            result += char
    return result