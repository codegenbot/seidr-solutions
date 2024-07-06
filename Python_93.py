```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if 'aeiouAEIOU'.count(char.lower()) == 0:
                if char.islower():
                    if ord(char) - 97 in [1, 3, 5, 7, 9]:
                        result += chr((ord(char) - 97 + 13) % 26 + 97)
                    else:
                        result += char.swapcase()
                else:
                    if ord(char) - 65 in [1, 3, 5, 7, 9]:
                        result += chr((ord(char) - 65 + 13) % 26 + 65)
                    else:
                        result += char.swapcase()
            else:
                if char.islower():
                    if 'aeiou'.count(char.lower()) > 0:
                        if char.lower() == 'a':
                            result += 'c' if char.islower() else 'C'
                        elif char.lower() == 'e':
                            result += 'g' if char.islower() else 'G'
                        elif char.lower() == 'i':
                            result += 'k' if char.islower() else 'K'
                        elif char.lower() == 'o':
                            result += 'q' if char.islower() else 'Q'
                        elif char.lower() == 'u':
                            result += 'y' if char.islower() else 'Y'
                    else:
                        result += char.swapcase()
                else:
                    if 'AEIOU'.count(char.upper()) > 0:
                        if char.lower() == 'a':
                            result += 'c' if char.islower() else 'C'
                        elif char.lower() == 'e':
                            result += 'g' if char.islower() else 'G'
                        elif char.lower() == 'i':
                            result += 'k' if char.islower() else 'K'
                        elif char.lower() == 'o':
                            result += 'q' if char.islower() else 'Q'
                        elif char.lower() == 'u':
                            result += 'y' if char.islower() else 'Y'
                    else:
                        result += char.swapcase()
        else:
            result += char
    return result