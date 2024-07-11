```'
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
                elif char.lower() == 'u':
                    result += 'y'
            else:
                if char.isupper():
                    result += chr((ord(char) + 3 - ord('A')) % 26 + ord('A'))
                else:
                    result += chr((ord(char) + 3 - ord('a')) % 26 + ord('a'))
        else:
            result += char
    return result```