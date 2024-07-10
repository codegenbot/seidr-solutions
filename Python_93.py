```
def encode(message):
    result = ""
    i = 0
    while i < len(message):
        if message[i].isalpha():
            if message[i].lower() in 'aeiou':
                if i == len(message) - 1 or not message[i+1].isalpha():
                    result += chr((ord(message[i]) - 97 + 3) % 26 + 97)
                else:
                    result += chr((ord(message[i]) - 65 + 3) % 26 + 65) if message[i].isupper() else chr((ord(message[i]) - 97 + 3) % 26 + 97)
            elif not message[i].islower():  
                if i == len(message) - 1 or not message[i+1].isalpha():
                    result += chr((ord(message[i]) - 65 + 3) % 26 + 65)
                else:
                    result += chr((ord(message[i]) - 65 + 3) % 26 + 65) if message[i].isupper() else chr((ord(message[i]) - 97 + 3) % 26 + 97)
            else:
                if i == len(message) - 1 or not message[i+1].isalpha():
                    result += chr((ord(message[i]) - 97 + 3) % 26 + 97)
                else:
                    result += chr((ord(message[i]) - 97 + 3) % 26 + 97)
        else:  
            result += message[i]
        i += 1
    return result