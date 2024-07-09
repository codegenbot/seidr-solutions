Here is the solution:

def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(char.lower()) - 97
                new_char = chr((index + 2) % 26 + 97)
                result += new_char.upper() if char.isupper() else new_char
            else:
                if char.islower():
                    result += 'z' if char == 'x' else chr((ord(char) - 1) % 26 + 97)
                else:
                    result += 'Z' if char == 'X' else chr((ord(char) - 1) % 26 + 65)
        else:
            result += char
    return result