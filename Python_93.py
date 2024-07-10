```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                new_char = chr((ord(char) + 13) % 26)
                if new_char.lower() in 'aeiou':
                    shift = 'bcdfghjklmnpqrstvwxyz'.index(new_char.lower()) + 2
                    result += 'abcdefghijklmnopqrstuvwxyz'[shift%26].upper()
                else:
                    result += new_char
            else:
                new_char = chr((ord(char) - 13) % 26)
                if new_char.lower() in 'aeiou':
                    shift = 'bcdfghjklmnpqrstvwxyz'.index(new_char.lower()) + 2
                    result += 'abcdefghijklmnopqrstuvwxyz'[shift%26].lower()
                else:
                    result += new_char
        else:
            result += char
    return result