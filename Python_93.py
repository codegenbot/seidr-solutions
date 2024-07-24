def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                value = (ord(char) - 65 + 3) % 26
                if value == 0: value += 26
                result += chr(value + 65)
            else:
                value = (ord(char) - 97 + 3) % 26
                if value == 0: value += 26
                result += chr(value + 97)
        elif char.isdigit():  
            value = int(char) + 3
            if value > 9:
                if value == 10: 
                    result += '7'
                else:
                    result += '8'
            else:
                result += str(value)
        else:  
            result += char
    return result