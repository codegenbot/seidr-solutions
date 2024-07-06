def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if char.lower() == 'a':
                    result += 'y' if char.islower() else 'Y'
                elif char.lower() == 'e':
                    result += '3' if char.islower() else '3'
                elif char.lower() == 'i':
                    result += '1' if char.islower() else '1'
                elif char.lower() == 'o':
                    result += '0' if char.islower() else '0'
                elif char.lower() == 'u':
                    result += 'v' if char.islower() else 'V'
            else:
                result += char.swapcase()
        else:
            result += char
    return result