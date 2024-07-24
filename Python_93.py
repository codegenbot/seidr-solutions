def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                shifted_value = (ord(char) - 65 + 3) % 26
                if shifted_value == 0:
                    result += 'Z'
                else:
                    result += chr(shifted_value + 65)
            else:
                shifted_value = (ord(char) - 97 + 3) % 26
                if shifted_value == 0:
                    result += 'z'
                else:
                    result += chr(shifted_value + 97)
        elif char.isdigit():  
            num_value = int(char) + 3
            if num_value > 9:
                if num_value % 10 == 0:
                    result += '7'
                else:
                    result += '8'
            else:
                result += str(num_value)
        else:  
            result += char
    return result